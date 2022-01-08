package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	T, _ := strconv.ParseInt(scanner.Text(), 10, 64)
	for i := int64(0); i < T; i++ {
		scanner.Scan()
		arr := strings.Split(scanner.Text(), " ")
		a, _ := strconv.ParseInt(arr[0], 10, 64)
		A := int(a)
		b, _ := strconv.ParseInt(arr[1], 10, 64)
		B := int(b)
		gcd := GCD(A, B)
		lcm := (A * B) / gcd
		fmt.Println(gcd, lcm)
	}
}

func GCD(A, B int) int {
	var small_no int
	var big_no int

	if A > B {
		small_no = B
		big_no = A
	} else {
		small_no = A
		big_no = B
	}
	rem := big_no % small_no
	if rem == 0 {
		return small_no
	} else {
		return GCD(small_no, rem)
	}
}
