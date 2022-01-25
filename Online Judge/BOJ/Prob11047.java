import java.util.Scanner;

public class Prob11047 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int[] arrMoney = new int[n];
		for (int i = 0; i < n; i++) {
			arrMoney[i] = sc.nextInt();
		}
		sc.close();
		int count = 0, i = n - 1;
		while (i >= 0) {
			while (k >= arrMoney[i]) {
				count += k / arrMoney[i];
				k %= arrMoney[i];
			}
			i--;
		}
		System.out.println(count);
	}
}
