import java.util.Scanner;
import java.lang.Math;
public class Game {
	public static void Menu() {
		System.out.println("###################");
		System.out.println("###1.play 0.exit###");
		System.out.println("###################");
	}
	public static void game() {
		int num = (int)(Math.random()*100);
		Scanner scan = new Scanner(System.in);
		System.out.println("请猜一个数字");
		while(true) {
		int tmp = scan.nextInt();
		if (tmp > num) {
		System.out.println("猜大了,重新猜");	
		} else if(tmp < num) {
		System.out.println("猜小了,重新猜");
		} else {
		System.out.println("恭喜你,猜对了");	
		break;
		}
		}
	}
	public static void main(String[] args) {
	    boolean flag = true;
		while(flag) {
		Menu();
	    System.out.println("请输入要选择的数字,1或0");
		Scanner scan = new Scanner(System.in);
		int input = scan.nextInt();
		switch(input) {
			case 1:
			game();
			break;
			case 0:
			System.out.println("游戏退出");
			flag = false;
		    break;
			default:
			System.out.println("输入错误,请重新输入");
			break;
		}
		}
	}
}