package workbook.chap0x01;

import java.util.Scanner;

public class Prob1267 {
	public static int moneyTotal(int[] arr, int seconds, int money) {
		int result = 0;
		for (int time : arr) {
			int share = time / seconds;
			result += money * (share + 1);
		}
		return result;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] callTimes = new int[n];
		for (int i = 0; i < n; i++) {
			callTimes[i] = sc.nextInt();
		}
		sc.close();
		int Y = moneyTotal(callTimes, 30, 10);
		int M = moneyTotal(callTimes, 60, 15);
		if (M > Y) {
			System.out.println("Y " + Y);
		} else if (M < Y) {
			System.out.println("M " + M);
		} else {
			System.out.println("Y M " + Y);
		}
	}
}
