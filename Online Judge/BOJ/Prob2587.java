package workbook.chap0x01;

import java.util.Arrays;
import java.util.Scanner;

public class Prob2587 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int sum = 0, avg = 0;
		int[] arr = new int[5];
		for (int i = 0; i < 5; i++) {
			arr[i] = sc.nextInt();
			sum += arr[i];
		}
		sc.close();
		avg = sum / 5;
		Arrays.sort(arr);
		System.out.println(avg+"\n"+arr[2]);
	}

}
