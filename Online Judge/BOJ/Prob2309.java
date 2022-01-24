package workbook.chap0x01;

import java.util.Arrays;
import java.util.Scanner;

public class Prob2309 {
	static void permutation(int[] arr, int depth) {
		if (depth == 0) {
			// depth 0일때 arr는 7개
			int sum = 0;
			for (int height : arr) {
				sum += height;
			}
			// 7개 다 더하고 100이면 해당 arr 출력하고 끝
			if (sum == 100) {
				Arrays.sort(arr);
				for (int height : arr) {
					System.out.println(height);
				}
				System.exit(0);
			}
			return;
		}
		// depth 2일 때
		// for 문 돌면서 arr 1개씩 빼면서 뺀 arr(8개)로 다시 permutation
		for (int i = 0; i < arr.length; i++) {
			int[] subArr1 = Arrays.copyOfRange(arr, 0, i);
			int[] subArr2 = Arrays.copyOfRange(arr, i + 1, arr.length);
			int[] concate = new int[subArr1.length + subArr2.length];
			System.arraycopy(subArr1, 0, concate, 0, subArr1.length);
			System.arraycopy(subArr2, 0, concate, subArr1.length, subArr2.length);
			permutation(concate, depth - 1);
		}
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int[] dwarfs = new int[9];
		for (int i = 0; i < dwarfs.length; i++) {
			dwarfs[i] = scanner.nextInt();
		}
		scanner.close();
		permutation(dwarfs, 2);
	}

}
