package workbook.chap0x01;

import java.util.Scanner;

public class Prob10093 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long A = sc.nextLong();
		long B = sc.nextLong();
		sc.close();
		if (A < B) {
			System.out.println(B - A - 1);
			for(long i = A + 1L; i < B; i++) {
				System.out.print(i+" ");
			}
		} else if (A > B) {
			System.out.println(A - B - 1);
			for(long i = B + 1L; i < A; i++) {
				System.out.print(i+" ");
			}
		} else {
            System.out.println(0);
        }
	}
}
