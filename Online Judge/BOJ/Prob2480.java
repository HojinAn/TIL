package workbook.chap0x01;

import java.util.Scanner;

public class Prob2480 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		sc.close();
		int max = Math.max(a, Math.max(b, c)), result = 0;
		if (a != b & b != c & c != a) {
			result = max * 100;
		} else if (a == b && b == c) {
			result = 10000 + a * 1000;
		} else {
			int last;
			if (b==c) last = b;
			else last = a;
			result = 1000 + last * 100;
		}
		System.out.println(result);
	}
}
