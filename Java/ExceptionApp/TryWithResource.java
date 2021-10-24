import java.io.FileWriter;
import java.io.IOException;

public class TryWithResource {//AutoClosable하면 try w/ rsc 쓸 수 있다. Java SE 7부터

	public static void main(String[] args) {
		try (FileWriter f = new FileWriter("data.txt")) {//괄호 안에 close해야하는 녀석을 넣는다.
			f.write("Hello");
		} catch (IOException e) {
			e.printStackTrace();
		}//f.close 쓸 필요도 없이 이렇게 하면 checkedException이랑 같다.
	}
}
