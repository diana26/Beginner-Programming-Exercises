import java.util.Scanner;

public class Point {
	private int x;
	private int y;
	private static Scanner s;
	public Point(int startX, int startY) {
		x = startX;
		y = startY;
	}
	
	public int getX()
	{ return x; 
	}
	public int getY()
	{
		return y;
	}
	
	public double distance(Point otherPt)
	{
		int dx = x - otherPt.getX();
		int dy = y - otherPt.getY();
		return Math.sqrt(dx*dx+dy*dy);
	}
	
	public static void main (String[] args)
	{
		s = new Scanner(System.in);
		int x = s.nextInt();
		int y = s.nextInt();
		int x2 = s.nextInt();
		int y2 = s.nextInt();
		Point p1 = new Point(x,y);
		Point p2 = new Point(x2,y2);
		System.out.println(p1.distance(p2));
	}
}
