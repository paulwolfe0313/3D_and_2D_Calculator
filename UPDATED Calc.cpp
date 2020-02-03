#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <Windows.h>
#include <thread>
#include <fstream>
#include <sstream>





#define _WIN32_WINNT 0x0500


using namespace std;




class Cube
{
public:
	double length = NULL;
	double width = NULL;
	double height_3D = NULL;

	void set_length(double lengthNum)
	{
		length = lengthNum;
	}
	double get_length() const { return (length); }

	void set_width(double widthNum) { width = widthNum; }
	double get_num() const { return width; }

	void set_height_3D(double height_3DNum) { height_3D = height_3DNum; }
	double get_num() { return height_3D; }


	void set_volume(double volumeNum)
	{
		volume = volumeNum;
	}

	double get_volume() const { return (length * width * height_3D); }

private:
	double volume = NULL;

};


class Sphere
{
public:

	Sphere() {
		pi = 3.14159265;
		oneThird = 1.3333333;
	}
	double r = NULL;
	double pi;
	double oneThird;
	double volume = NULL;
	void set_radius(double radius) { r = radius; }
	double get_radius() const { return r; }

	double get_sphere_volume() const { return pow(r, 3) * pi * oneThird; }

};



class Cone
{
public:

	double r = NULL;
	double pi = 3.14159265;
	double volume = NULL;
	double cone_height = NULL;
	void set_radius(double radius) { r = radius; }
	double get_radius() const { return r; }

	void set_cone_height(double height_cone) { cone_height = height_cone; }
	double get_cone_height() { return cone_height; }

	double get_cone_volume() const { return cone_height / 3 * pow(r, 2) * pi; }

};



class TriPrism
{
public:
	double B_side_a = NULL;
	double B_side_b = NULL;
	double triPrism_height = NULL;

	void set_a_side(double side1) { B_side_a = side1; }
	double get_a_side() const { return B_side_a; }

	void set_b_side(double side2) { B_side_b = side2; }
	double get_b_side() const { return B_side_b; }



	void set_tri_height(double tri_height) { triPrism_height = tri_height; }
	double get_tri_height() const { return triPrism_height; }
	double get_tri_volume() const { return (B_side_a * triPrism_height) * .5 * B_side_b; }

};



class Cylinder
{
public:

	double cylinder_radius = NULL;
	double pi = 3.14159265;
	double volume = NULL;
	double cylinder_height = NULL;

	void set_cylinder_radius(double radius) { cylinder_radius = radius; }
	double get_cylinder_radius() const { return cylinder_radius; }

	void set_cylinder_height(double height_cylinder) { cylinder_height = height_cylinder; }
	double get_cylinder_height() { return cylinder_height; }

	double get_cylinder_volume() const { return pi * pow(cylinder_radius, 2) * cylinder_height; }

};




// 2D shape surface area calculator

//object square
class shape1 : public Cube
{
	double side; // private by default
	double side2;

public:
	void set_side(double sideNum) { side = sideNum; }
	double get_num() const { return side; }
	void set_side2(double sideNum2) { side2 = sideNum2; }
	double get_area() const { return side * side2; }


};
//////////////////////////////////////////////////
//object circle
class shape2
{

	double r = NULL;
	double pi = 3.14159265;
	double diameter = NULL;



public:
	void set_radius(double radius) { r = radius; }
	double get_radius() const { return r; }
	double get_circle_area() { return (r * r) * pi; }
	void set_diameter(double diameter) { diameter = diameter; }
	double get_diameter() const { return pow(r, 2); }

};

////////////////////////////////////////////////////
// object triangle

class shape3
{
	double b = NULL;
	double h = NULL;
	double oneHALF = .5;


public:
	void set_base(double base) { b = base; }
	double get_base() const { return b; }

	void set_height(double height) { h = height; }
	double get_height() const { return h; }

	double get_area() { return ((b * h) * (oneHALF)); }


};
////////////////////////////////////////////////
// Object Trapezoid
class shape4
{
	double bA = NULL;
	double bB = NULL;
	double h = NULL;


public:
	void set_baseA(double baseA) { bA = baseA; }
	double get_baseA() const { return bA; }

	void set_baseB(double baseB) { bB = baseB; }
	double get_baseB() const { return bB; }

	void set_height(double height) { h = height; }
	double get_height() const { return h; }

	double get_area() const { return ((bA + bB) * (h) / 2); }
};



////////////////////////////////////////////////
// object Ellipse
class shape5
{
	double aA = NULL;
	double aB = NULL;
	double pi2 = 3.14159265;
public:
	void set_axisA(double axisA) { aA = axisA; }
	double get_axisA() const { return aA; }

	void set_axisB(double axisB) { aB = axisB; }
	double get_axisB() const { return aB; }

	double get_area() const { return ((pi2 * aA * aB)); }

};
////////////////////////////////////////////////
// Object Sector
class shape6
{
	double r = NULL;
	double a = NULL;
	double pi3 = 3.14159265;

public:
	void set_radius(double radius) { r = radius; }
	double get_radius() const { return r; }

	void set_angleinRadians(double angleinRadians) { a = angleinRadians; }
	double get_angleinRadians() const { return a; }

	double get_area() { return a / 360 * pi3 * r * r; }

};






int main()
{

	//Resizing the Console
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	//MoveWindow(window_handle, x, y, width, height, redraw_window);
	MoveWindow(console, r.left, r.top, 1100, 800, TRUE);
	//Start of Main Output

	

	system("COLOR 80");

	//For Cube
	Cube Cube1;
	double length = 0;
	double width = 0;
	double height_3D = 0;

	//For Sphere
	Sphere sphere1;
	double sphere_radius = 0;
	double sphere_pi = 3.14159265;

	// For Cone
	Cone cone1;
	double cone_height = 0;
	double cone_radius = 0;
	double cone_pi = 3.14159265;

	//For Triangular Prism
	TriPrism triPrism1;
	double base1 = 0;
	double base2 = 0;
	double base3 = 0;
	double triPrism_height = 0;

	//For Cylinder
	Cylinder cylinder1;
	double cylinder_radius = 0;
	double cylinder_height = 0;



	////////////////////////////////////////////////////////////
	// For 2D shapes
	//for circle
	shape2 circle;
	double radius = 0;
	double pi = 3.14159265;

	//for square
	shape1 square;
	double side1 = 0;
	double side2 = 0;

	//for triangle
	shape3 triangle;
	double base = NULL;
	double height = NULL;
	double oneHALF = .5;

	//for trapezoid
	shape4 trapezoid;
	double baseA = NULL;
	double baseB = NULL;
	double trapHeight = NULL;

	//for Ellipse
	shape5 Ellipse;
	double axisA = 0;
	double axisB = 0;
	double pi2 = 3.14159265;

	//for Sector
	shape6 Sector;
	double radius2 = 0;
	double angle = 0;
	/////////////////////////////////////////////////////////////////////




	string option1;

	// 3D Shape Calculator

	ofstream myfile;
	myfile.open("Your_Answer.txt");
	do {

		system("CLS");

		cout << char(218);      for (int i = 0; i < 77; i++) { cout << char(196); }      cout << char(191) << endl;
		cout << char(179) << "                                                                             " << char(179) << endl;
		cout << char(179) << "                                                                             " << char(179) << endl;
		cout << char(179) << "  Hello and Welcome to Our 3D Volume and 2D Surface Area Shape Calculator.   " << char(179) << endl;
		cout << char(179) << "By typing in the number corresponding with the shape, and then press [ENTER] " << char(179) << endl;
		cout << char(179) << "                                                                             " << char(179) << endl;
		cout << char(192);      for (int i = 0; i < 77; i++) { cout << char(196); }      cout << char(217) << endl;




		


		cout << "Please Select an Option Below\n";


		cout << char(218);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(194);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(191) << endl;
		cout << char(186) << "1.Cube      " << char(186) << "2.Sphere    " << char(186) << endl;
		cout << char(186) << "            " << char(186) << "            " << char(186) << endl;
		cout << char(195);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(197);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(185) << endl;
		cout << char(186) << "3.Cone      " << char(186) << "4.Triangular" << char(186) << endl;
		cout << char(186) << "            " << char(186) << "Prism       " << char(186) << endl;
		cout << char(192);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(193);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(217) << endl;

		cout << char(201);      for (int i = 0; i < 12; i++) { cout << char(205); }      cout << char(187) << endl;
		cout << char(186) << "            " << char(186) << endl;
		cout << char(186) << "5. Cylinder " << char(186) << endl;
		cout << char(186) << "            " << char(186) << endl;
		cout << char(200);      for (int i = 0; i < 12; i++) { cout << char(205); }      cout << char(188) << endl;

		cout << char(218);      for (int i = 0; i < 21; i++) { cout << char(196); }      cout << char(191) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(179) << "6.2D Shape Calculator" << char(179) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(192);      for (int i = 0; i < 21; i++) { cout << char(196); }      cout << char(217) << endl;

		cout << char(218);      for (int i = 0; i < 21; i++) { cout << char(196); }      cout << char(191) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(179) << "  QUIT or TYPE 7     " << char(179) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(179) << "                     " << char(179) << endl;
		cout << char(192);      for (int i = 0; i < 21; i++) { cout << char(196); }      cout << char(217) << endl;


		
		cin >> option1;
		if (option1 == "1" || option1 == "1.")
		{
			cout << "Enter the length of the cube: " << endl;
			cin >> length;
			cout << "Enter the Width of the cube: " << endl;
			cin >> width;
			cout << "Enter the Height of the cube: " << endl;
			cin >> height_3D;

			Cube1.set_length(length);
			Cube1.set_width(width);
			Cube1.set_height_3D(height_3D);



			cout << "\n\nThe volume of your cube is: " << Cube1.get_volume() << "\n\n\n\n\n\n";
			myfile << "Answer is: " << Cube1.get_volume();
			myfile.close();
		}

		if (option1 == "2" || option1 == "2.")
		{
			printf("What is the radius of the sphere: \n");
			cin >> sphere_radius;


			sphere1.set_radius(sphere_radius);
			cout << "The radius of the circle is: " << sphere1.get_radius() << endl;
			cout << "The volume of the cube is: " << sphere1.get_sphere_volume() << endl;
			myfile << "Answer is: " << sphere1.get_sphere_volume() << endl;
			myfile.close();


		}

		if (option1 == "3" || option1 == "3.")
		{
			printf("What is the radius of the cone: \n");
			cin >> cone_radius;
			cone1.set_radius(cone_radius);
			cout << "What is the height of the cone: \n";
			cin >> cone_height;
			cone1.set_cone_height(cone_height);



			cout << "The volume of your cone is: " << cone1.get_cone_volume() << endl;
			myfile << "Answer is: " << cone1.get_cone_volume() << endl;
			myfile.close();
		}

		if (option1 == "4" || option1 == "4.")
		{
			cout << "Enter side 1 of the triangular prism: " << endl;
			cin >> side1;
			cout << "Enter side 2 of the triangular prism: " << endl;
			cin >> side2;
			cout << "Enter the height of the triangular prism: " << endl;
			cin >> triPrism_height;

			triPrism1.set_a_side(side1);
			triPrism1.set_b_side(side2);
			triPrism1.set_tri_height(triPrism_height);



			cout << "\n\nThe volume of your triangular prism is: " << triPrism1.get_tri_volume() << "\n\n\n\n\n\n";
			myfile << "Answer is: " << triPrism1.get_tri_volume();
			myfile.close();
		}

		if (option1 == "5" || option1 == "5.")
		{
			printf("What is the radius of the cylinder: \n");
			cin >> cylinder_radius;
			cylinder1.set_cylinder_radius(cylinder_radius);
			cout << "What is the height of the cylinder: \n";
			cin >> cylinder_height;
			cylinder1.set_cylinder_height(cylinder_height);



			cout << "The volume of your cylinder is: " << cylinder1.get_cylinder_volume() << endl;
			myfile << "Answer is: " << cylinder1.get_cylinder_volume() << endl;
			myfile.close();
		}



		if (option1 == "7" || option1 == "7." || option1 == "QUIT" || option1 == "quit" || option1 == "Quit")
		{
			system("CLS");
			cout << "Thank You For Using Our Calculator... \n";
			break;
		}

		system("PAUSE");
		system("CLS");
		

	} while (option1 != "6");








	// 2D Surface Area Calculator
	string choice;
	if (option1 == "6" || option1 == "6.")
	{


		do
		{
			
			system("CLS");

			cout << char(218);      for (int i = 0; i < 83; i++) { cout << char(196); }      cout << char(191) << endl;
			cout << char(179) << "                                                                                   " << char(179) << endl;
			cout << char(179) << "                                                                                   " << char(179) << endl;
			cout << char(179) << "Welcome to the 2D Shape Surface Area Calculator. Please Select A 2D Shape Below    " << char(179) << endl;
			cout << char(179) << "By typing in the number corresponding with the shape, and then press [ENTER]       " << char(179) << endl;
			cout << char(179) << "                                                                                   " << char(179) << endl;
			cout << char(192);      for (int i = 0; i < 83; i++) { cout << char(196); }      cout << char(217) << endl;

			cout << char(218);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(194);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(191) << endl;
			cout << char(186) << "1.Square    " << char(186) << "2.Cirlce    " << char(186) << endl;
			cout << char(186) << "            " << char(186) << "            " << char(186) << endl;
			cout << char(195);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(197);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(185) << endl;
			cout << char(186) << "3.Triangle  " << char(186) << "4.Trapezoid " << char(186) << endl;
			cout << char(186) << "            " << char(186) << "            " << char(186) << endl;
			cout << char(192);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(193);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(217) << endl;

			cout << char(218);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(194);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(191) << endl;
			cout << char(186) << "5.Ellipse   " << char(186) << "6.Sector    " << char(186) << endl;
			cout << char(186) << "            " << char(186) << "            " << char(186) << endl;
			cout << char(195);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(197);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(185) << endl;
			cout << char(186) << "            " << char(186) << "            " << char(186) << endl;
			cout << char(186) << "            " << char(186) << "            " << char(186) << endl;
			cout << char(192);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(193);  for (int i = 0; i < 12; i++) { cout << char(205); }  cout << char(217) << endl;

			cout << char(218);      for (int i = 0; i < 21; i++) { cout << char(196); }      cout << char(191) << endl;
			cout << char(179) << "                     " << char(179) << endl;
			cout << char(179) << "                     " << char(179) << endl;
			cout << char(179) << "  QUIT or TYPE 7     " << char(179) << endl;
			cout << char(179) << "                     " << char(179) << endl;
			cout << char(179) << "                     " << char(179) << endl;
			cout << char(192);      for (int i = 0; i < 21; i++) { cout << char(196); }      cout << char(217) << endl;

			
			ofstream myfile;
			cin >> choice;
			if (choice == "1" || choice == "1.")
			{
				cout << "Enter the length of side 1 of your square: " << endl;
				cin >> side1;
				cout << "Enter the length of side 2 of your square: " << endl;
				cin >> side2;

				square.set_side(side1);
				square.set_side2(side2);



				cout << "Area of square is: " << square.get_area() << endl;
				myfile << "Answer is: " << square.get_area();
				myfile.close();

			}
			if (choice == "2" || choice == "2.")
			{
				printf("What is the radius of the circle: \n");
				cin >> radius;

				circle.set_radius(radius);



				cout << "The radius of the circle is: " << circle.get_radius() << endl;
				cout << "The area of the circle is: " << circle.get_circle_area() << endl;
				cout << "The Diameter of the circle is : " << circle.get_diameter() << endl;
				myfile << "Answer is: " << circle.get_circle_area() << "\nAnswer is: " << circle.get_diameter();
				myfile.close();
			}
			if (choice == "3" || choice == "3.")
			{
				printf("What is the base of the triangle? \n");
				cin >> base;
				printf("What is the height of the triangle? \n");
				cin >> height;
				triangle.set_base(base);
				triangle.set_height(height);
				cout << "The Area of the Triangle is " << triangle.get_area() << endl;
				myfile << "Answer is: " << triangle.get_area();
				myfile.close();

			}
			if (choice == "4" || choice == "4.")
			{
				printf("What is the length of Base A \n");
				cin >> baseA;
				printf("What is the length of Base B \n");
				cin >> baseB;
				printf("What is the height of the trapezoid \n");
				cin >> trapHeight;

				trapezoid.set_baseA(baseA);
				trapezoid.set_baseB(baseB);
				trapezoid.set_height(trapHeight);
				cout << "The area of the trapezoid is " << trapezoid.get_area() << endl;
				myfile << "Answer is: " << trapezoid.get_area();
				myfile.close();
			}





			if (choice == "5" || choice == "5.")
			{
				cout << "What is the length of Axis A? \n";
				cin >> axisA;
				cout << "What is the lenght of Axis B? \n";
				cin >> axisB;

				Ellipse.set_axisA(axisA);
				Ellipse.set_axisB(axisB);
				cout << "The area of your Ellipse is " << Ellipse.get_area() << endl;
				myfile << "Answer is: " << Ellipse.get_area();
				myfile.close();
			}





			if (choice == "6" || choice == "6.")
			{
				cout << "Please enter in the Radius of the Sector. " << endl;
				cin >> radius2;
				cout << "Please enter in the Angle in Degrees. EX: 25, 120. " << endl;
				cin >> angle;

				Sector.set_angleinRadians(angle);
				Sector.set_radius(radius2);
				cout << "The Surface Area of your Sector is " << +Sector.get_area() << endl;
				myfile << "Answer is: " << +Sector.get_area();
				myfile.close();
			}




			if (choice == "7" || choice == "7." || choice == "QUIT" || choice == "quit" || choice == "Quit")
			{
				system("CLS");
				cout << "Thank You For Using Our Calculator... \n";
				system("PAUSE");
				system("EXIT");
				break;
			}

			system("PAUSE");
			system("CLS");

		} while (true);



	}


	return(0);


}
