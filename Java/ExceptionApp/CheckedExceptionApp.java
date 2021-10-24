import java.io.FileWriter;
import java.io.IOException;

public class CheckedExceptionApp {
	public static void main(String[] args) {
		FileWriter f=null;
		try {
			f = new FileWriter("data.txt");
			f.write("Creating txt file");
			//close 발생 전에 Exception이 발생한다면 close가 실행되지 않아 난감한 일이 생길 수 있다.
			//f.close();
		}catch(IOException e) {//따라서 이렇게 Exception이 발생해도
			e.printStackTrace();
		} finally {//이 finally로 실행해줘서 닫히도록 한다.
			if (f != null) {
				try {
					f.close();//IOException은 파일이 없으면 발생할 수 있으니까 얘도 예외처리 해줘야 한다.
				} catch (IOException e) {
					e.printStackTrace();//사실 이렇게 써놓으면 난잡하다..
				}
			}			
		}

	}

}
