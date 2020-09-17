package libra

import (
	"bufio"
	"os"
	"strconv"
)

//余りにも大量な入力を受け取ることは出来ない。
var sc = bufio.NewScanner(os.Stdin)

func setupIO() {
	sc.Split(bufio.ScanWords)
}

func nextInt() int {
	sc.Scan()
	val, err := strconv.Atoi(sc.Text())
	if err != nil {
		panic(err)
	}
	return val
}

func nextFloat() float64 {
	sc.Scan()
	val, err := strconv.ParseFloat(sc.Text(),64)
	if err != nil {
		panic(err)
	}
	return val
}



