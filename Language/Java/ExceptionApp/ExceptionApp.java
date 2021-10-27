public class ExceptionApp {
	public static void main(String[] args) {
		System.out.println(1);
		int[] scores = {1, 2, 3};

		try {
			System.out.println(2);
			System.out.println(scores[3]); //ArrayIndexOutOfBoundsException
			// 여기까지 실행 -> catch(ArrayIndexOutOfBoundsException e)문으로 이동
			System.out.println(3);//여기부터 4까지는 출력하지 않고 catch 실행하고 벗어나서 5 출력
			System.out.println(2/0); //ArithmeticException 발생(0으로는 나눌 수 없다)
			System.out.println(4);
		} catch(ArithmeticException e) {
			System.out.println("잘못된 계산 "+e.getMessage());//뭐가 문제인지 알려주기 여기에선 0으로 나눌 수 없다는 의미로 '/ by zero' 출력
			e.printStackTrace();//그냥 예외 발생시 출력되는 오류 메세지 반환
		} catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("범위 밖 ");
		}		
		System.out.println(5); 
	}
}