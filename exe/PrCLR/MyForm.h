//using System::String;
#pragma once
//#include "LandmarkCoreIncludes.h"
//#define EXPORTING
//#include "FaceLandmarkImg.h"
//#pragma unmanaged
//#pragma managed(push, off)
#pragma unmanaged
#include <vector>
#include <string>
//#include "LandmarkCoreIncludes.h"
#include "FaceLandmarkImg.h"
#include "opencv2/opencv.hpp"

#pragma managed

#include <msclr\marshal_cppstd.h>
//#include "FaceLandmarkImg.h"

//extern "C" __declspec(dllimport)  vector<string> Emotion(vector<string> arguments);
//using namespace FaceLandmarkImg;
//#pragma managed
//#include "dlib\matrix\matrix.h"
//#include "FaceAnalyser.h"
//#include "LandmarkCoreIncludes.h"
//#include "opencv2\core\core.hpp"
//#include <vector>
//#pragma unmanaged(pop)
//#pragma managed
using namespace FaceLandmarkImg;

namespace PrCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			//dlib::matrix<float, 0, 1> m;
			//
			//TODO: добавьте код конструктора
			//
			//[DllImport("user32.dll")]
			
		}
		void tt(vector<string> arguments)
		{
			textBox1->Text = "Hello World!";
			/*vector<string> a,b;
			b.push_back("-f");
			b.push_back("C:\\Users\\AnMoshkova\\Documents\\face_test_img_front.jpg");
			b.push_back("-of");
			b.push_back("‪C:\\Users\\AnMoshkova\\Documents\\test1.txt");
*/
			/*
			//a = FaceLandmarkImg::Emotion(b);
			FaceLandmarkImg::Emotion(arguments);
			vector<string> a= FaceLandmarkImg::Emotion(arguments);
			string strQ1 = a[4];
			string strQ2 = a[5];
			string strQ3 = a[6];
			//string str = to_string(a.size());
			//string str = "test";
			//cout << str << endl;
			String^ str21 = gcnew String(strQ1.c_str());
			String^ str22 = gcnew String(strQ2.c_str());
			String^ str23 = gcnew String(strQ3.c_str());
			//Console::WriteLine(str2);
			textBox1->Text = str21;
			textBox2->Text = str22;
			textBox3->Text = str23;
			*/

		}

		void tt2(vector<string> arguments)
		{
			textBox1->Text = "Hello World!";
			//LandmarkDetector::CLNF clnf_model = FaceLandmarkImg::PoseHeadFrame2(arguments);
			cv::VideoCapture cap(0);
			int strQ1 = 0;
			//for (;;)
			for (int i = 0; i < 3; i++)
			{
				cv::Mat frame;
				cap >> frame;
				//if (frame.empty()) break; // end of video stream
				cv::imshow("this is you, smile! :)", frame);
				cvWaitKey(1);
				//FaceLandmarkImg::Emotion(arguments);
				//vector<string> a = FaceLandmarkImg::PoseHeadFrame3(arguments, clnf_model, frame);
				vector<string> a = FaceLandmarkImg::PoseHeadFrame4(arguments,frame);
				string strQ1 = a[0];
				string strQ2 = a[1];
				string strQ3 = a[2];
				//string str = to_string(a.size());
				//string str = "test";
				//cout << str << endl;
				String^ str21 = gcnew String(strQ1.c_str());
				String^ str22 = gcnew String(strQ2.c_str());
				String^ str23 = gcnew String(strQ3.c_str());
				//Console::WriteLine(str21);
				//Console::WriteLine(str22);
				//Console::WriteLine(str23);
				//std::cout << strQ1 << " " << strQ2 << " " << strQ3 << " " << std::endl;
				textBox1->Text = str21;
				textBox2->Text = str22;
				textBox3->Text = str23;
			
				
				//strQ1++;
				//string str = to_string(strQ1++);
				//String^ str21 = gcnew String(str.c_str());
				//textBox1->Text = str21;
			}

		}
		bool stop = false;
		//cv::Mat image;
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Button^  button2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(98, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(98, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Y";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Z";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(108, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(293, 65);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(293, 111);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(293, 166);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Stop and Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//String^ a5 = args[4];
	//std::string s5 = msclr::interop::marshal_as<std::string>(a5);
	stop = false;
	vector<string> a, arguments;
	arguments.push_back("E:/openface2/OpenFace-OpenFace_v0.2/build3/bin/Release/test2.exe");
	arguments.push_back("-f");
	arguments.push_back("E:/openface2/s01_13.jpg");
	arguments.push_back("-of");
	arguments.push_back("E:/openface2/test1.txt");
	//textBox1->Text = "Hello World!";
	//LandmarkDetector::CLNF clnf_model = FaceLandmarkImg::PoseHeadFrame2(arguments);
	cv::Mat image;
	cv::VideoCapture cap(0);
	int strQ1 = 0;
	for (;;)
		//for (int i = 0; i < 3; i++)
	{
	    cv::Mat frame;
		cap >> frame;
		image = frame.clone();
		//if (frame.empty()) break; // end of video stream
		cv::imshow("this is you, smile! :)", frame);
		cvWaitKey(1);
		//FaceLandmarkImg::Emotion(arguments);
		//vector<string> a = FaceLandmarkImg::PoseHeadFrame3(arguments, clnf_model, frame);
		vector<string> a = FaceLandmarkImg::PoseHeadFrame4(arguments, frame);
		string strQ1 = a[0];
		string strQ2 = a[1];
		string strQ3 = a[2];
		string strQ4 = a[3];
		string strQ5 = a[4];
		string strQ6 = a[5];
		//string str = to_string(a.size());
		//string str = "test";
		//cout << str << endl;
		String^ str21 = gcnew String(strQ1.c_str());
		String^ str22 = gcnew String(strQ2.c_str());
		String^ str23 = gcnew String(strQ3.c_str());
		String^ str24 = gcnew String(strQ4.c_str());
		String^ str25 = gcnew String(strQ5.c_str());
		String^ str26 = gcnew String(strQ6.c_str());
		textBox1->Text = str21;
		textBox2->Text = str22;
		textBox3->Text = str23;
		textBox4->Text = str24;
		textBox5->Text = str25;
		textBox6->Text = str26;

		if (stop)
		{
			cv::imshow("image", image);
			IO::Stream^ myStream;
			SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			//saveFileDialog1->Filter = "Dateityp PNG (*.PNG)|*.PNG|All files (*.*)|*.*";
			saveFileDialog1->Filter = "Dateityp PNG (*.PNG)|*.PNG";
			saveFileDialog1->FilterIndex = 2;
			saveFileDialog1->RestoreDirectory = true;
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ FileName1=saveFileDialog1->FileName;
				//saveFileDialog1->FileName;
				string strFile = msclr::interop::marshal_as<std::string>(FileName1);
				cv::imwrite(strFile,image);
			}

			break;
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	stop = true;
	
	
}
};
}
