import java.io.FileWriter;
import java.io.IOException;

public class CheckedExceptionApp {
	public static void main(String[] args) {
		try {
			FileWriter f = new FileWriter("data.txt");
			f.write("Creating txt file");
			f.close();//우리가 실행하는 동안 이 txt 파일을 잡고 있던 걸 놔주는 작업
			//checkedException은 실행 전에 프로그램이 알아서 exception 발생을 알려준다. 그래서 try catch로 처리해주기
		}catch(IOException e) {
			e.printStackTrace();
		}

	}

}
