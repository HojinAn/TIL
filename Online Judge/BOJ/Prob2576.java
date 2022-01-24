package workbook.chap0x01;

import java.util.Scanner;

public class Prob2576 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[7];
		int sum = 0, min = Integer.MAX_VALUE;
		for (int el: arr) {
			el = sc.nextInt();
			if (el % 2 != 0) {
				min = Math.min(min, el);
				sum += el;
			}
		}
		sc.close();
		if (sum == 0) {
			System.out.println(-1);
		} else {
			System.out.println(sum+"\n"+min);
		}
	}
}
