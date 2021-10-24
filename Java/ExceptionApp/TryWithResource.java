import java.io.FileWriter;
import java.io.IOException;

public class TryWithResource {//AutoClosable�ϸ� try w/ rsc �� �� �ִ�. Java SE 7����

	public static void main(String[] args) {
		try (FileWriter f = new FileWriter("data.txt")) {//��ȣ �ȿ� close�ؾ��ϴ� �༮�� �ִ´�.
			f.write("Hello");
		} catch (IOException e) {
			e.printStackTrace();
		}//f.close �� �ʿ䵵 ���� �̷��� �ϸ� checkedException�̶� ����.
	}
}
