public class ExceptionApp {
	public static void main(String[] args) {
		System.out.println(1);
		int[] scores = {1, 2, 3};

		try {
			System.out.println(2);
			System.out.println(scores[3]); //ArrayIndexOutOfBoundsException
			// ������� ���� -> catch(ArrayIndexOutOfBoundsException e)������ �̵�
			System.out.println(3);//������� 4������ ������� �ʰ� catch �����ϰ� ����� 5 ���
			System.out.println(2/0); //ArithmeticException
			System.out.println(4);
		} catch(ArithmeticException e) {
			System.out.println("�߸��� ��� ");
		} catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("���� �� ");
		}		
		System.out.println(5); 
	}
}