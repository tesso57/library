package libra

func Min() {

}

//int version absolute
func abs(num int) int {
	if num > 0 {
		return num
	} else {
		return -1 * num
	}
}

//繰り返し自乗法
func pow(num int, time int) int {
	res := 1
	for time > 0 {
		if time % 2 != 0 {
			res = res * num
		}
		num = num * num
		time /= 2
	}
	return res
}

