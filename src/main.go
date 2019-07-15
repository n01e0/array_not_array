package main

import (
    "fmt"
    "math"
)

func main(){
    var array uint16 = 22737
    a := getElement(3, array)
    fmt.Printf("This Array's 3rd element is %d\n",a)
    fmt.Println("Now change 3rd place 5")
    newA := setElement(3, 5, array)
    m := getElement(3, newA)
    fmt.Printf("new array's 3rd element is %d\n",m)
}

func getElement(i uint16, array uint16) uint16 {
    var element uint16 = ((array >> (3 * (i - 1))) & 7)
    return element
}

func setElement(pt uint16, setNum uint16, array uint16) uint16 {
    var offset uint16 = (setNum << (3 * (pt - 1)))
    var bottomPadding uint16 = (uint16)(math.Pow(2, (float64)(3 * setNum -2)))
    var headPadding uint16 = (uint16)(math.Pow(2, (float64)(2 * (8 - pt * 3) - 1)))
    var newArray uint16 = offset + bottomPadding + headPadding
    return newArray
}
