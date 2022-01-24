package workbook.chap0x01;

import java.util.Scanner;

public class Prob2490 {

	public static void main(String[] args) {
		// 배 0 등 1 0:1/1:3 -> 도 0:4/1:0 윷
		// 3줄 입력 받기
		Scanner sc = new Scanner(System.in);
		
		for (int i = 0; i < 3; i++) {
			int count = 0;
			for (int j = 0; j < 4; j++) {
				if (sc.nextInt() == 1) {
					count++;
				}
			}
//			if (count == 0) {
//				System.out.println("D");
//			} else if (count == 1) {
//				System.out.println("C");
//			} else if (count == 2) {
//				System.out.println("B");
//			} else if (count == 3) {
//				System.out.println("A");
//			} else {
//				System.out.println("E");
//			}
			switch(count) {
			case(0): {
				System.out.println("D");
				break;
			}
			case(1): {
				System.out.println("C");
				break;
			}
			case(2): {
				System.out.println("B");
				break;
			}
			case(3): {
				System.out.println("A");
				break;
			}
			case(4): {
				System.out.println("E");
				break;
			}
			}
		}
		sc.close();
	}

}
