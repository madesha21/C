class distance
{
	int feet;
	double inches;
}
class DestanceDemo
{
	public static void main(String args[])
	{
		distance d1=new distance(); // here d1 is the object
		distance d2=new distance(); // here d2 is the object creation.

		d1.feet=14;
		d1.inches=9.5;

		d2.feet=19;
		d2.inches=5.5;

		System.out.println("Dist-1 : "+d1.feet + "\'-"+ d1.inches + "\"");


	}
}
