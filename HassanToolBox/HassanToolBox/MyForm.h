#pragma once
#include"iostream"
#include <opencv2/opencv.hpp>
#include<msclr\marshal_cppstd.h>
#include<msclr/marshal.h>


namespace HassanToolBox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	using namespace cv;


	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ Upload;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ yValue;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ angle;
	private: System::Windows::Forms::TextBox^ flipType;
	private: System::Windows::Forms::TextBox^ gammaValue;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ picValue;





	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ src_p1y;


	private: System::Windows::Forms::TextBox^ src_p1x;




	private: System::Windows::Forms::TextBox^ src_p3x;
	private: System::Windows::Forms::TextBox^ src_p3y;


	private: System::Windows::Forms::TextBox^ src_p2x;
	private: System::Windows::Forms::TextBox^ src_p2y;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::ToolStripMenuItem^ translationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mirrorFlipToolStripMenuItem;









	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ levelPlane;
	private: System::Windows::Forms::TextBox^ value2;

	private: System::Windows::Forms::TextBox^ value1;

	private: System::Windows::Forms::TextBox^ Value;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::TextBox^ Ep2;
private: System::Windows::Forms::TextBox^ EP1;



private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::TextBox^ xValue;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ translationToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ rotationToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ flipToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ zoomToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ skwingToolStripMenuItem;
private: System::Windows::Forms::SaveFileDialog^ sfd;

private: System::Windows::Forms::ToolStripMenuItem^ imageBlindingToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ imageSubtractToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ powerLowToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ bitPlaneToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ grayLevelToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ segmentaionToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ thresholdingToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
private: System::Windows::Forms::ToolStripMenuItem^ equalizationToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ brightnessToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ negativeeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ neighborhoodProcessingToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ smoothingToolStripMenuItem;





private: System::Windows::Forms::ToolStripMenuItem^ edgeDetectionToolStripMenuItem;



private: System::Windows::Forms::ToolStripMenuItem^ saltAndPepperToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
private: System::Windows::Forms::ToolStripMenuItem^ edgeBasedToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ comperssionToolStripMenuItem;



















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Upload = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->translationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->translationToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rotationToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flipToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skwingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mirrorFlipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageBlindingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageSubtractToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->powerLowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bitPlaneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayLevelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->segmentaionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thresholdingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->equalizationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brightnessToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->negativeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->neighborhoodProcessingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smoothingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edgeDetectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saltAndPepperToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edgeBasedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comperssionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Ep2 = (gcnew System::Windows::Forms::TextBox());
			this->flipType = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EP1 = (gcnew System::Windows::Forms::TextBox());
			this->xValue = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->angle = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->yValue = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->gammaValue = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->picValue = (gcnew System::Windows::Forms::TextBox());
			this->src_p1y = (gcnew System::Windows::Forms::TextBox());
			this->src_p1x = (gcnew System::Windows::Forms::TextBox());
			this->src_p3x = (gcnew System::Windows::Forms::TextBox());
			this->src_p3y = (gcnew System::Windows::Forms::TextBox());
			this->src_p2x = (gcnew System::Windows::Forms::TextBox());
			this->src_p2y = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->levelPlane = (gcnew System::Windows::Forms::TextBox());
			this->value2 = (gcnew System::Windows::Forms::TextBox());
			this->value1 = (gcnew System::Windows::Forms::TextBox());
			this->Value = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->sfd = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(759, 274);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(298, 235);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// Upload
			// 
			this->Upload->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Upload.BackgroundImage")));
			this->Upload->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Upload->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->Upload->FlatAppearance->BorderSize = 2;
			this->Upload->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->Upload->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Upload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Upload->ForeColor = System::Drawing::Color::Yellow;
			this->Upload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Upload.Image")));
			this->Upload->Location = System::Drawing::Point(679, 527);
			this->Upload->Name = L"Upload";
			this->Upload->Size = System::Drawing::Size(146, 40);
			this->Upload->TabIndex = 3;
			this->Upload->Text = L"Choose Pic";
			this->Upload->UseVisualStyleBackColor = true;
			this->Upload->Click += gcnew System::EventHandler(this, &MyForm::Upload_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1514, 43);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(63, 39);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.BackgroundImage")));
			this->openToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->openToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(156, 40);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.BackgroundImage")));
			this->saveToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->saveToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(156, 40);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.BackgroundImage")));
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(156, 40);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->translationToolStripMenuItem,
					this->mirrorFlipToolStripMenuItem, this->segmentaionToolStripMenuItem
			});
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(74, 39);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// translationToolStripMenuItem
			// 
			this->translationToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"translationToolStripMenuItem.BackgroundImage")));
			this->translationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->translationToolStripMenuItem3,
					this->rotationToolStripMenuItem2, this->flipToolStripMenuItem2, this->zoomToolStripMenuItem2, this->skwingToolStripMenuItem
			});
			this->translationToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->translationToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->translationToolStripMenuItem->Name = L"translationToolStripMenuItem";
			this->translationToolStripMenuItem->Size = System::Drawing::Size(271, 40);
			this->translationToolStripMenuItem->Text = L"Image Operation";
			// 
			// translationToolStripMenuItem3
			// 
			this->translationToolStripMenuItem3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"translationToolStripMenuItem3.BackgroundImage")));
			this->translationToolStripMenuItem3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->translationToolStripMenuItem3->ForeColor = System::Drawing::Color::Yellow;
			this->translationToolStripMenuItem3->Name = L"translationToolStripMenuItem3";
			this->translationToolStripMenuItem3->Size = System::Drawing::Size(222, 40);
			this->translationToolStripMenuItem3->Text = L"Translation";
			this->translationToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::translationToolStripMenuItem3_Click);
			// 
			// rotationToolStripMenuItem2
			// 
			this->rotationToolStripMenuItem2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rotationToolStripMenuItem2.BackgroundImage")));
			this->rotationToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->rotationToolStripMenuItem2->ForeColor = System::Drawing::Color::Yellow;
			this->rotationToolStripMenuItem2->Name = L"rotationToolStripMenuItem2";
			this->rotationToolStripMenuItem2->Size = System::Drawing::Size(222, 40);
			this->rotationToolStripMenuItem2->Text = L"Rotation";
			this->rotationToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::rotationToolStripMenuItem2_Click);
			// 
			// flipToolStripMenuItem2
			// 
			this->flipToolStripMenuItem2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flipToolStripMenuItem2.BackgroundImage")));
			this->flipToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->flipToolStripMenuItem2->ForeColor = System::Drawing::Color::Yellow;
			this->flipToolStripMenuItem2->Name = L"flipToolStripMenuItem2";
			this->flipToolStripMenuItem2->Size = System::Drawing::Size(222, 40);
			this->flipToolStripMenuItem2->Text = L"Flip(Mirror)";
			this->flipToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::flipToolStripMenuItem2_Click);
			// 
			// zoomToolStripMenuItem2
			// 
			this->zoomToolStripMenuItem2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomToolStripMenuItem2.BackgroundImage")));
			this->zoomToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->zoomToolStripMenuItem2->ForeColor = System::Drawing::Color::Yellow;
			this->zoomToolStripMenuItem2->Name = L"zoomToolStripMenuItem2";
			this->zoomToolStripMenuItem2->Size = System::Drawing::Size(222, 40);
			this->zoomToolStripMenuItem2->Text = L"Zoom";
			this->zoomToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::zoomToolStripMenuItem2_Click);
			// 
			// skwingToolStripMenuItem
			// 
			this->skwingToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"skwingToolStripMenuItem.BackgroundImage")));
			this->skwingToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->skwingToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->skwingToolStripMenuItem->Name = L"skwingToolStripMenuItem";
			this->skwingToolStripMenuItem->Size = System::Drawing::Size(222, 40);
			this->skwingToolStripMenuItem->Text = L"Skwing";
			this->skwingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::skwingToolStripMenuItem_Click);
			// 
			// mirrorFlipToolStripMenuItem
			// 
			this->mirrorFlipToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mirrorFlipToolStripMenuItem.BackgroundImage")));
			this->mirrorFlipToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->imageBlindingToolStripMenuItem,
					this->imageSubtractToolStripMenuItem1, this->powerLowToolStripMenuItem, this->bitPlaneToolStripMenuItem, this->grayLevelToolStripMenuItem
			});
			this->mirrorFlipToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->mirrorFlipToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->mirrorFlipToolStripMenuItem->Name = L"mirrorFlipToolStripMenuItem";
			this->mirrorFlipToolStripMenuItem->Size = System::Drawing::Size(271, 40);
			this->mirrorFlipToolStripMenuItem->Text = L"Point Processing";
			// 
			// imageBlindingToolStripMenuItem
			// 
			this->imageBlindingToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageBlindingToolStripMenuItem.BackgroundImage")));
			this->imageBlindingToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->imageBlindingToolStripMenuItem->Name = L"imageBlindingToolStripMenuItem";
			this->imageBlindingToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->imageBlindingToolStripMenuItem->Text = L"Image Blinding";
			this->imageBlindingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::imageBlindingToolStripMenuItem_Click);
			// 
			// imageSubtractToolStripMenuItem1
			// 
			this->imageSubtractToolStripMenuItem1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageSubtractToolStripMenuItem1.BackgroundImage")));
			this->imageSubtractToolStripMenuItem1->ForeColor = System::Drawing::Color::Yellow;
			this->imageSubtractToolStripMenuItem1->Name = L"imageSubtractToolStripMenuItem1";
			this->imageSubtractToolStripMenuItem1->Size = System::Drawing::Size(258, 40);
			this->imageSubtractToolStripMenuItem1->Text = L"Image Subtract";
			this->imageSubtractToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::imageSubtractToolStripMenuItem1_Click);
			// 
			// powerLowToolStripMenuItem
			// 
			this->powerLowToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"powerLowToolStripMenuItem.BackgroundImage")));
			this->powerLowToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->powerLowToolStripMenuItem->Name = L"powerLowToolStripMenuItem";
			this->powerLowToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->powerLowToolStripMenuItem->Text = L"Power Low";
			this->powerLowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::powerLowToolStripMenuItem_Click);
			// 
			// bitPlaneToolStripMenuItem
			// 
			this->bitPlaneToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bitPlaneToolStripMenuItem.BackgroundImage")));
			this->bitPlaneToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->bitPlaneToolStripMenuItem->Name = L"bitPlaneToolStripMenuItem";
			this->bitPlaneToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->bitPlaneToolStripMenuItem->Text = L"Bit Plane";
			this->bitPlaneToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bitPlaneToolStripMenuItem_Click);
			// 
			// grayLevelToolStripMenuItem
			// 
			this->grayLevelToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"grayLevelToolStripMenuItem.BackgroundImage")));
			this->grayLevelToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->grayLevelToolStripMenuItem->Name = L"grayLevelToolStripMenuItem";
			this->grayLevelToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->grayLevelToolStripMenuItem->Text = L"GrayLevel";
			this->grayLevelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayLevelToolStripMenuItem_Click);
			// 
			// segmentaionToolStripMenuItem
			// 
			this->segmentaionToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"segmentaionToolStripMenuItem.BackgroundImage")));
			this->segmentaionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->thresholdingToolStripMenuItem });
			this->segmentaionToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->segmentaionToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->segmentaionToolStripMenuItem->Name = L"segmentaionToolStripMenuItem";
			this->segmentaionToolStripMenuItem->Size = System::Drawing::Size(271, 40);
			this->segmentaionToolStripMenuItem->Text = L"Segmentaion";
			// 
			// thresholdingToolStripMenuItem
			// 
			this->thresholdingToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"thresholdingToolStripMenuItem.BackgroundImage")));
			this->thresholdingToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->thresholdingToolStripMenuItem->Name = L"thresholdingToolStripMenuItem";
			this->thresholdingToolStripMenuItem->Size = System::Drawing::Size(229, 40);
			this->thresholdingToolStripMenuItem->Text = L"Thresholding";
			this->thresholdingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::thresholdingToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem7, this->neighborhoodProcessingToolStripMenuItem, this->toolStripMenuItem13, this->comperssionToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(89, 39);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem1.BackgroundImage")));
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->toolStripMenuItem1->ForeColor = System::Drawing::Color::Yellow;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(347, 40);
			this->toolStripMenuItem1->Text = L"Image Operation";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem2.BackgroundImage")));
			this->toolStripMenuItem2->ForeColor = System::Drawing::Color::Red;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(222, 40);
			this->toolStripMenuItem2->Text = L"Translation";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem3.BackgroundImage")));
			this->toolStripMenuItem3->ForeColor = System::Drawing::Color::Red;
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(222, 40);
			this->toolStripMenuItem3->Text = L"Rotation";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem4.BackgroundImage")));
			this->toolStripMenuItem4->ForeColor = System::Drawing::Color::Red;
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(222, 40);
			this->toolStripMenuItem4->Text = L"Flip(Mirror)";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem5.BackgroundImage")));
			this->toolStripMenuItem5->ForeColor = System::Drawing::Color::Red;
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(222, 40);
			this->toolStripMenuItem5->Text = L"Zoom";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem6.BackgroundImage")));
			this->toolStripMenuItem6->ForeColor = System::Drawing::Color::Red;
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(222, 40);
			this->toolStripMenuItem6->Text = L"Skwing";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem7.BackgroundImage")));
			this->toolStripMenuItem7->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem8,
					this->toolStripMenuItem9, this->toolStripMenuItem10, this->toolStripMenuItem11, this->toolStripMenuItem12, this->equalizationToolStripMenuItem,
					this->brightnessToolStripMenuItem, this->negativeeToolStripMenuItem
			});
			this->toolStripMenuItem7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->toolStripMenuItem7->ForeColor = System::Drawing::Color::Yellow;
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(347, 40);
			this->toolStripMenuItem7->Text = L"Point Processing";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem8.BackgroundImage")));
			this->toolStripMenuItem8->ForeColor = System::Drawing::Color::Lime;
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(258, 40);
			this->toolStripMenuItem8->Text = L"Image Blinding";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem8_Click);
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem9.BackgroundImage")));
			this->toolStripMenuItem9->ForeColor = System::Drawing::Color::Lime;
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(258, 40);
			this->toolStripMenuItem9->Text = L"Image Subtract";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem10.BackgroundImage")));
			this->toolStripMenuItem10->ForeColor = System::Drawing::Color::Lime;
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(258, 40);
			this->toolStripMenuItem10->Text = L"Power Low";
			this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem10_Click);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem11.BackgroundImage")));
			this->toolStripMenuItem11->ForeColor = System::Drawing::Color::Lime;
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(258, 40);
			this->toolStripMenuItem11->Text = L"Bit Plane";
			this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem11_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem12.BackgroundImage")));
			this->toolStripMenuItem12->ForeColor = System::Drawing::Color::Lime;
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(258, 40);
			this->toolStripMenuItem12->Text = L"GrayLevel";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem12_Click);
			// 
			// equalizationToolStripMenuItem
			// 
			this->equalizationToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"equalizationToolStripMenuItem.BackgroundImage")));
			this->equalizationToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->equalizationToolStripMenuItem->Name = L"equalizationToolStripMenuItem";
			this->equalizationToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->equalizationToolStripMenuItem->Text = L"Equalization";
			this->equalizationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::equalizationToolStripMenuItem_Click);
			// 
			// brightnessToolStripMenuItem
			// 
			this->brightnessToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brightnessToolStripMenuItem.BackgroundImage")));
			this->brightnessToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->brightnessToolStripMenuItem->Name = L"brightnessToolStripMenuItem";
			this->brightnessToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->brightnessToolStripMenuItem->Text = L"Brightness";
			this->brightnessToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::brightnessToolStripMenuItem_Click);
			// 
			// negativeeToolStripMenuItem
			// 
			this->negativeeToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"negativeeToolStripMenuItem.BackgroundImage")));
			this->negativeeToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->negativeeToolStripMenuItem->Name = L"negativeeToolStripMenuItem";
			this->negativeeToolStripMenuItem->Size = System::Drawing::Size(258, 40);
			this->negativeeToolStripMenuItem->Text = L"Negativee";
			this->negativeeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::negativeeToolStripMenuItem_Click);
			// 
			// neighborhoodProcessingToolStripMenuItem
			// 
			this->neighborhoodProcessingToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"neighborhoodProcessingToolStripMenuItem.BackgroundImage")));
			this->neighborhoodProcessingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->smoothingToolStripMenuItem,
					this->edgeDetectionToolStripMenuItem, this->saltAndPepperToolStripMenuItem
			});
			this->neighborhoodProcessingToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->neighborhoodProcessingToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->neighborhoodProcessingToolStripMenuItem->Name = L"neighborhoodProcessingToolStripMenuItem";
			this->neighborhoodProcessingToolStripMenuItem->Size = System::Drawing::Size(347, 40);
			this->neighborhoodProcessingToolStripMenuItem->Text = L"Neighborhood processing";
			// 
			// smoothingToolStripMenuItem
			// 
			this->smoothingToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"smoothingToolStripMenuItem.BackgroundImage")));
			this->smoothingToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->smoothingToolStripMenuItem->Name = L"smoothingToolStripMenuItem";
			this->smoothingToolStripMenuItem->Size = System::Drawing::Size(251, 40);
			this->smoothingToolStripMenuItem->Text = L"Smoothing";
			this->smoothingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::smoothingToolStripMenuItem_Click);
			// 
			// edgeDetectionToolStripMenuItem
			// 
			this->edgeDetectionToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edgeDetectionToolStripMenuItem.BackgroundImage")));
			this->edgeDetectionToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->edgeDetectionToolStripMenuItem->Name = L"edgeDetectionToolStripMenuItem";
			this->edgeDetectionToolStripMenuItem->Size = System::Drawing::Size(251, 40);
			this->edgeDetectionToolStripMenuItem->Text = L"Edge detection";
			this->edgeDetectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::edgeDetectionToolStripMenuItem_Click);
			// 
			// saltAndPepperToolStripMenuItem
			// 
			this->saltAndPepperToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saltAndPepperToolStripMenuItem.BackgroundImage")));
			this->saltAndPepperToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->saltAndPepperToolStripMenuItem->Name = L"saltAndPepperToolStripMenuItem";
			this->saltAndPepperToolStripMenuItem->Size = System::Drawing::Size(251, 40);
			this->saltAndPepperToolStripMenuItem->Text = L"Median Blur";
			this->saltAndPepperToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saltAndPepperToolStripMenuItem_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem13.BackgroundImage")));
			this->toolStripMenuItem13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->toolStripMenuItem13->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem14,
					this->edgeBasedToolStripMenuItem
			});
			this->toolStripMenuItem13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->toolStripMenuItem13->ForeColor = System::Drawing::Color::Yellow;
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(347, 40);
			this->toolStripMenuItem13->Text = L"Segmentaion";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem14.BackgroundImage")));
			this->toolStripMenuItem14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->toolStripMenuItem14->ForeColor = System::Drawing::Color::Lime;
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(229, 40);
			this->toolStripMenuItem14->Text = L"Thresholding";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem14_Click);
			// 
			// edgeBasedToolStripMenuItem
			// 
			this->edgeBasedToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edgeBasedToolStripMenuItem.BackgroundImage")));
			this->edgeBasedToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->edgeBasedToolStripMenuItem->ForeColor = System::Drawing::Color::Lime;
			this->edgeBasedToolStripMenuItem->Name = L"edgeBasedToolStripMenuItem";
			this->edgeBasedToolStripMenuItem->Size = System::Drawing::Size(229, 40);
			this->edgeBasedToolStripMenuItem->Text = L"Edge Based";
			this->edgeBasedToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::edgeBasedToolStripMenuItem_Click);
			// 
			// comperssionToolStripMenuItem
			// 
			this->comperssionToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"comperssionToolStripMenuItem.BackgroundImage")));
			this->comperssionToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->comperssionToolStripMenuItem->ForeColor = System::Drawing::Color::Yellow;
			this->comperssionToolStripMenuItem->Name = L"comperssionToolStripMenuItem";
			this->comperssionToolStripMenuItem->Size = System::Drawing::Size(347, 40);
			this->comperssionToolStripMenuItem->Text = L"Comperssion";
			this->comperssionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::comperssionToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(437, 274);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(298, 235);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->Ep2);
			this->panel1->Controls->Add(this->flipType);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->EP1);
			this->panel1->Controls->Add(this->xValue);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->angle);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->yValue);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(12, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 237);
			this->panel1->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(10, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 31);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Point1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(8, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 31);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Point2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Aqua;
			this->label4->Location = System::Drawing::Point(3, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 26);
			this->label4->TabIndex = 51;
			this->label4->Text = L"FlipValue";
			// 
			// Ep2
			// 
			this->Ep2->Location = System::Drawing::Point(107, 203);
			this->Ep2->Multiline = true;
			this->Ep2->Name = L"Ep2";
			this->Ep2->Size = System::Drawing::Size(49, 31);
			this->Ep2->TabIndex = 49;
			this->Ep2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// flipType
			// 
			this->flipType->Location = System::Drawing::Point(107, 128);
			this->flipType->Multiline = true;
			this->flipType->Name = L"flipType";
			this->flipType->Size = System::Drawing::Size(49, 31);
			this->flipType->TabIndex = 13;
			this->flipType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->flipType->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Location = System::Drawing::Point(166, 178);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(195, 45);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Zoom";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Aqua;
			this->label3->Location = System::Drawing::Point(21, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 31);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Angle";
			// 
			// EP1
			// 
			this->EP1->Location = System::Drawing::Point(107, 165);
			this->EP1->Multiline = true;
			this->EP1->Name = L"EP1";
			this->EP1->Size = System::Drawing::Size(49, 31);
			this->EP1->TabIndex = 50;
			this->EP1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// xValue
			// 
			this->xValue->BackColor = System::Drawing::SystemColors::HighlightText;
			this->xValue->Location = System::Drawing::Point(107, 14);
			this->xValue->Multiline = true;
			this->xValue->Name = L"xValue";
			this->xValue->Size = System::Drawing::Size(49, 26);
			this->xValue->TabIndex = 15;
			this->xValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Chartreuse;
			this->label2->Location = System::Drawing::Point(14, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 31);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Yvalue";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Chartreuse;
			this->label1->Location = System::Drawing::Point(13, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Xvalue";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->Location = System::Drawing::Point(166, 125);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(195, 34);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Flip";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// angle
			// 
			this->angle->Location = System::Drawing::Point(107, 84);
			this->angle->Multiline = true;
			this->angle->Name = L"angle";
			this->angle->Size = System::Drawing::Size(49, 31);
			this->angle->TabIndex = 12;
			this->angle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Location = System::Drawing::Point(166, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Translate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// yValue
			// 
			this->yValue->BackColor = System::Drawing::SystemColors::HighlightText;
			this->yValue->Location = System::Drawing::Point(107, 47);
			this->yValue->Multiline = true;
			this->yValue->Name = L"yValue";
			this->yValue->Size = System::Drawing::Size(49, 26);
			this->yValue->TabIndex = 11;
			this->yValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Location = System::Drawing::Point(166, 80);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 39);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Rotate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::Yellow;
			this->button7->Location = System::Drawing::Point(131, 165);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(165, 44);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Skewing";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(71, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 43);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Equalization";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button13->FlatAppearance->BorderSize = 2;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button13->ForeColor = System::Drawing::Color::Lime;
			this->button13->Location = System::Drawing::Point(71, 71);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(236, 41);
			this->button13->TabIndex = 35;
			this->button13->Text = L"Brightness";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::Lime;
			this->button8->Location = System::Drawing::Point(71, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(236, 42);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Negative";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// gammaValue
			// 
			this->gammaValue->Location = System::Drawing::Point(188, 167);
			this->gammaValue->Multiline = true;
			this->gammaValue->Name = L"gammaValue";
			this->gammaValue->Size = System::Drawing::Size(49, 31);
			this->gammaValue->TabIndex = 15;
			this->gammaValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(71, 210);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(236, 46);
			this->button5->TabIndex = 12;
			this->button5->Text = L"PowerLow\r\n";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::Aqua;
			this->button10->Location = System::Drawing::Point(79, 95);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(120, 35);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Cone";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button11->FlatAppearance->BorderSize = 2;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::Aqua;
			this->button11->Location = System::Drawing::Point(96, 177);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(201, 46);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Median Blur";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(43, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 47);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Blinding";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// picValue
			// 
			this->picValue->Location = System::Drawing::Point(209, 84);
			this->picValue->Multiline = true;
			this->picValue->Name = L"picValue";
			this->picValue->Size = System::Drawing::Size(49, 31);
			this->picValue->TabIndex = 19;
			this->picValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// src_p1y
			// 
			this->src_p1y->Location = System::Drawing::Point(111, 121);
			this->src_p1y->Multiline = true;
			this->src_p1y->Name = L"src_p1y";
			this->src_p1y->Size = System::Drawing::Size(49, 31);
			this->src_p1y->TabIndex = 21;
			this->src_p1y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// src_p1x
			// 
			this->src_p1x->Location = System::Drawing::Point(111, 80);
			this->src_p1x->Multiline = true;
			this->src_p1x->Name = L"src_p1x";
			this->src_p1x->Size = System::Drawing::Size(49, 31);
			this->src_p1x->TabIndex = 23;
			this->src_p1x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// src_p3x
			// 
			this->src_p3x->Location = System::Drawing::Point(256, 80);
			this->src_p3x->Multiline = true;
			this->src_p3x->Name = L"src_p3x";
			this->src_p3x->Size = System::Drawing::Size(49, 31);
			this->src_p3x->TabIndex = 27;
			this->src_p3x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// src_p3y
			// 
			this->src_p3y->Location = System::Drawing::Point(256, 121);
			this->src_p3y->Multiline = true;
			this->src_p3y->Name = L"src_p3y";
			this->src_p3y->Size = System::Drawing::Size(49, 31);
			this->src_p3y->TabIndex = 26;
			this->src_p3y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// src_p2x
			// 
			this->src_p2x->Location = System::Drawing::Point(182, 80);
			this->src_p2x->Multiline = true;
			this->src_p2x->Name = L"src_p2x";
			this->src_p2x->Size = System::Drawing::Size(49, 31);
			this->src_p2x->TabIndex = 31;
			this->src_p2x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// src_p2y
			// 
			this->src_p2y->Location = System::Drawing::Point(182, 121);
			this->src_p2y->Multiline = true;
			this->src_p2y->Name = L"src_p2y";
			this->src_p2y->Size = System::Drawing::Size(49, 31);
			this->src_p2y->TabIndex = 30;
			this->src_p2y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::Aqua;
			this->button12->Location = System::Drawing::Point(137, 311);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 35);
			this->button12->TabIndex = 34;
			this->button12->Text = L"Sharpping";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button14->ForeColor = System::Drawing::Color::Red;
			this->button14->Location = System::Drawing::Point(129, 10);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(160, 59);
			this->button14->TabIndex = 35;
			this->button14->Text = L"Choose background";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button15->FlatAppearance->BorderSize = 2;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::Lime;
			this->button15->Location = System::Drawing::Point(71, 312);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(236, 46);
			this->button15->TabIndex = 37;
			this->button15->Text = L"Bit plane";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button16->FlatAppearance->BorderSize = 2;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button16->ForeColor = System::Drawing::Color::Lime;
			this->button16->Location = System::Drawing::Point(141, 395);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(166, 42);
			this->button16->TabIndex = 36;
			this->button16->Text = L"Gray level ";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// levelPlane
			// 
			this->levelPlane->Location = System::Drawing::Point(188, 272);
			this->levelPlane->Multiline = true;
			this->levelPlane->Name = L"levelPlane";
			this->levelPlane->Size = System::Drawing::Size(49, 31);
			this->levelPlane->TabIndex = 38;
			this->levelPlane->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// value2
			// 
			this->value2->Location = System::Drawing::Point(86, 426);
			this->value2->Multiline = true;
			this->value2->Name = L"value2";
			this->value2->Size = System::Drawing::Size(49, 31);
			this->value2->TabIndex = 39;
			this->value2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// value1
			// 
			this->value1->Location = System::Drawing::Point(86, 380);
			this->value1->Multiline = true;
			this->value1->Name = L"value1";
			this->value1->Size = System::Drawing::Size(49, 31);
			this->value1->TabIndex = 40;
			this->value1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Value
			// 
			this->Value->Location = System::Drawing::Point(86, 26);
			this->Value->Multiline = true;
			this->Value->Name = L"Value";
			this->Value->Size = System::Drawing::Size(49, 31);
			this->Value->TabIndex = 43;
			this->Value->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Value->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button17->FlatAppearance->BorderSize = 2;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button17->ForeColor = System::Drawing::Color::Red;
			this->button17->Location = System::Drawing::Point(144, 14);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(205, 43);
			this->button17->TabIndex = 42;
			this->button17->Text = L"Thresholding";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button18->FlatAppearance->BorderSize = 2;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button18->ForeColor = System::Drawing::Color::Aqua;
			this->button18->Location = System::Drawing::Point(263, 45);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(120, 35);
			this->button18->TabIndex = 44;
			this->button18->Text = L"Pyramidal";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button19->FlatAppearance->BorderSize = 2;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button19->ForeColor = System::Drawing::Color::Aqua;
			this->button19->Location = System::Drawing::Point(218, 95);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(120, 35);
			this->button19->TabIndex = 45;
			this->button19->Text = L"Circular";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button20->FlatAppearance->BorderSize = 2;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button20->ForeColor = System::Drawing::Color::Aqua;
			this->button20->Location = System::Drawing::Point(8, 45);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(120, 35);
			this->button20->TabIndex = 46;
			this->button20->Text = L"Gaussian";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button21->FlatAppearance->BorderSize = 2;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button21->ForeColor = System::Drawing::Color::Aqua;
			this->button21->Location = System::Drawing::Point(137, 45);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(120, 35);
			this->button21->TabIndex = 47;
			this->button21->Text = L"Averaging";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button22->FlatAppearance->BorderSize = 2;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button22->ForeColor = System::Drawing::Color::Red;
			this->button22->Location = System::Drawing::Point(144, 63);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(205, 49);
			this->button22->TabIndex = 36;
			this->button22->Text = L"Edge Based";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button23->FlatAppearance->BorderSize = 2;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button23->ForeColor = System::Drawing::Color::Red;
			this->button23->Location = System::Drawing::Point(230, 128);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(150, 47);
			this->button23->TabIndex = 48;
			this->button23->Text = L"Subtract";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button24->FlatAppearance->BorderSize = 2;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button24->ForeColor = System::Drawing::Color::Yellow;
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(519, 560);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(135, 36);
			this->button24->TabIndex = 49;
			this->button24->Text = L"Save";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button25->FlatAppearance->BorderSize = 2;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button25->ForeColor = System::Drawing::Color::Yellow;
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(862, 560);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(128, 35);
			this->button25->TabIndex = 50;
			this->button25->Text = L"Reset";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->button23);
			this->panel3->Controls->Add(this->picValue);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Location = System::Drawing::Point(550, 46);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(417, 211);
			this->panel3->TabIndex = 51;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(81, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 31);
			this->label7->TabIndex = 49;
			this->label7->Text = L"PicValue";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->src_p1x);
			this->panel4->Controls->Add(this->src_p1y);
			this->panel4->Controls->Add(this->src_p3y);
			this->panel4->Controls->Add(this->src_p3x);
			this->panel4->Controls->Add(this->src_p2y);
			this->panel4->Controls->Add(this->src_p2x);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Location = System::Drawing::Point(1077, 46);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(417, 223);
			this->panel4->TabIndex = 52;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"MV Boli", 13, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Chartreuse;
			this->label13->Location = System::Drawing::Point(189, 48);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 29);
			this->label13->TabIndex = 54;
			this->label13->Text = L"P2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"MV Boli", 13, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::Chartreuse;
			this->label12->Location = System::Drawing::Point(258, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 29);
			this->label12->TabIndex = 53;
			this->label12->Text = L"P3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"MV Boli", 13, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Chartreuse;
			this->label11->Location = System::Drawing::Point(111, 47);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 29);
			this->label11->TabIndex = 52;
			this->label11->Text = L"P1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"MV Boli", 15, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::Chartreuse;
			this->label10->Location = System::Drawing::Point(72, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 32);
			this->label10->TabIndex = 51;
			this->label10->Text = L"Y";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Chartreuse;
			this->label9->Location = System::Drawing::Point(71, 79);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 32);
			this->label9->TabIndex = 50;
			this->label9->Text = L"X";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Chartreuse;
			this->label8->Location = System::Drawing::Point(3, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 30);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Src Point";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->value2);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->value1);
			this->panel2->Controls->Add(this->gammaValue);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->levelPlane);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Location = System::Drawing::Point(12, 289);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(405, 481);
			this->panel2->TabIndex = 54;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::Yellow;
			this->label18->Location = System::Drawing::Point(3, 380);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 31);
			this->label18->TabIndex = 42;
			this->label18->Text = L"From";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::Yellow;
			this->label17->Location = System::Drawing::Point(21, 426);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 31);
			this->label17->TabIndex = 41;
			this->label17->Text = L"To";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::Yellow;
			this->label14->Location = System::Drawing::Point(101, 272);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 31);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Plane";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::Yellow;
			this->label19->Location = System::Drawing::Point(21, 167);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(165, 31);
			this->label19->TabIndex = 13;
			this->label19->Text = L"GammaValue";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->button27);
			this->panel5->Controls->Add(this->button26);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->button21);
			this->panel5->Controls->Add(this->button20);
			this->panel5->Controls->Add(this->button18);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->button19);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Location = System::Drawing::Point(1085, 301);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(409, 355);
			this->panel5->TabIndex = 55;
			// 
			// button27
			// 
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button27->FlatAppearance->BorderSize = 2;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button27->ForeColor = System::Drawing::Color::Aqua;
			this->button27->Location = System::Drawing::Point(56, 260);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(120, 35);
			this->button27->TabIndex = 54;
			this->button27->Text = L"Vertical";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button26
			// 
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button26->FlatAppearance->BorderSize = 2;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->button26->ForeColor = System::Drawing::Color::Aqua;
			this->button26->Location = System::Drawing::Point(218, 260);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(120, 35);
			this->button26->TabIndex = 53;
			this->button26->Text = L"Horizontal";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Algerian", 15, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(3, 226);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(225, 28);
			this->label16->TabIndex = 52;
			this->label16->Text = L"Edge detection";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Algerian", 15, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(-4, 144);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(378, 28);
			this->label15->TabIndex = 51;
			this->label15->Text = L"Removing Salt and Pepper";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Algerian", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(3, 12);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(155, 28);
			this->label21->TabIndex = 50;
			this->label21->Text = L"Smoothing";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->button28);
			this->panel6->Controls->Add(this->label20);
			this->panel6->Controls->Add(this->button17);
			this->panel6->Controls->Add(this->Value);
			this->panel6->Controls->Add(this->button22);
			this->panel6->Location = System::Drawing::Point(519, 608);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(471, 173);
			this->panel6->TabIndex = 55;
			// 
			// button28
			// 
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button28->FlatAppearance->BorderSize = 2;
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->button28->ForeColor = System::Drawing::Color::Red;
			this->button28->Location = System::Drawing::Point(144, 121);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(205, 49);
			this->button28->TabIndex = 44;
			this->button28->Text = L"Compression";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::Lime;
			this->label20->Location = System::Drawing::Point(5, 26);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(78, 31);
			this->label20->TabIndex = 43;
			this->label20->Text = L"Value";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1514, 782);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Upload);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"HassanToolBox";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
    //Upload
    System::String^ image_path;
	System::String^ image_path2;
	System::String^ image_path3;
private: System::Void Upload_Click(System::Object^ sender, System::EventArgs^ e) {
	 openFileDialog1->InitialDirectory = "c:\\";
	 openFileDialog1->Filter = "PNG (*.png)|*.png|JPG (*.jpg)|*.jpg|JPEG (*.jpeg)|*.jpeg";
	 openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->ImageLocation = openFileDialog1->FileName;
		image_path = openFileDialog1->FileName;
	}
	else {
		MessageBox::Show("Can't open the file. Wrong file type", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::No;
	}
}

	   //Upload image in Menu
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "PNG (*.png)|*.png|JPG (*.jpg)|*.jpg|JPEG (*.jpeg)|*.jpeg";
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->ImageLocation = openFileDialog1->FileName;
		image_path = openFileDialog1->FileName;
	}
	else {
		MessageBox::Show("Can't open the file. Wrong file type", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::No;
	}
}
	   //upload Background
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog2->InitialDirectory = "c:\\";
		openFileDialog2->Filter = "PNG (*.png)|*.png|JPG (*.jpg)|*.jpg|JPEG (*.jpeg)|*.jpeg";
		openFileDialog2->FilterIndex = 2;
		openFileDialog2->RestoreDirectory = true;

		// Get Image
		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Catch the image full path
			image_path2 = openFileDialog2->FileName;
		}
		else {
			MessageBox::Show("Can't open the file. Wrong file type", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::No;
		}
}
	   //Save
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	imwrite("C:/Users/hs247/OneDrive/Desktop/new.jpg", src);
	imwrite(src_path, src);
}
	   //Save in menu
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	sfd->InitialDirectory = "c:\\";
	sfd->Filter = "PNG (.png)|.png|JPG (.jpg)|.jpg|JPEG (*.jpeg)|*.jpeg";
	sfd->FilterIndex = 2;
	sfd->RestoreDirectory = true;
	// Convert from system String to CV String
	msclr::interop::marshal_context context;

	const char* src_path = context.marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);

	// save Image
	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		// Set The image to the picturebox
		image_path3 = sfd->FileName;
		const char* src_path3 = context.marshal_as<const char*>(image_path3);
		imwrite(src_path3, src);
		imwrite(src_path, src);
	}
	else {
		MessageBox::Show("Can't Save the Pic.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::No;
	}
}
	   //RST
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat dst = imread("C:/Users/hs247/OneDrive/Desktop/new.jpg");
	imwrite("C:/Users/hs247/OneDrive/Desktop/new.jpg", dst);
	src = dst;
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}

   //Image Blinding
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Convert from system String to CV String
	msclr::interop::marshal_context context;
	const char* src_path = context.marshal_as<const char*>(image_path);
	const char* src_path2 = context.marshal_as<const char*>(image_path2);
	// Image Processing Code
	Mat src, src2;
	src = imread(src_path, 0);
	src2 = imread(src_path2, 0);
	Mat dst(src.rows, src.cols, CV_8UC1);
	resize(src2, src2, src.size());
	
	double pic= Convert::ToInt32(picValue->Text) *0.01;
		for (int i = 0; i < src.rows; i++)
	{
		for (int j = 0; j < src.cols; j++)
		{
			dst.at<uchar>(i, j) = src.at<uchar>(i, j) * pic + src2.at<uchar>(i, j) * (1 - pic);
		}

	}
	imwrite(src_path, dst);
	// Reload the image
	pictureBox2->ImageLocation = image_path;
}
	   //Subtract
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	const char* src_path = context.marshal_as<const char*>(image_path);
	const char* src_path2 = context.marshal_as<const char*>(image_path2);
	Mat src, src2;
	src = imread(src_path, 0);
	src2 = imread(src_path2, 0);
	Mat dst(src.rows, src.cols, CV_8UC1);
	resize(src2, src2, src.size());
	double pic = Convert::ToInt32(picValue->Text) * 0.01;
	for (int i = 0; i < src.rows; i++)
	{
		for (int j = 0; j < src.cols; j++)
		{
			dst.at<uchar>(i, j) = src.at<uchar>(i, j) * pic - src2.at<uchar>(i, j) * (1 - pic);
		}
	}
	imwrite(src_path, dst);
	pictureBox2->ImageLocation = image_path;
}


	   //Translation
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int tx = Convert::ToInt32(xValue->Text);
	int ty = Convert::ToInt32(yValue->Text);
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(src, src, TM, src.size());
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Rotation
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int angle1 = Convert::ToInt32(angle->Text);
	resize(src,src,cv::Size(src.cols,src.cols));
	Mat R = getRotationMatrix2D(Point2f(src.cols / 2, src.rows / 2), angle1, 1);
	warpAffine(src, src, R, src.size());
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Flip
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int type = Convert::ToInt32(flipType->Text);
	flip(src, src, type);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Skewing
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int p1x = Convert::ToInt32(src_p1x->Text);
	int p1y = Convert::ToInt32(src_p1y->Text);
	int p2x = Convert::ToInt32(src_p2x->Text);
	int p2y = Convert::ToInt32(src_p2y->Text);
	int p3x = Convert::ToInt32(src_p3x->Text);
	int p3y = Convert::ToInt32(src_p3y->Text);

	Point2f src_p[3];
	src_p[0] = Point2f(p1x, p1y);
	src_p[1] = Point2f(src.cols - p2x, p2y);
	src_p[2] = Point2f(p3x, src.rows - p3y);
	Point2f dst_p[3];
	dst_p[0] = Point2f(0, 0);
	dst_p[1] = Point2f(src.cols - 1, 0);
	dst_p[2] = Point2f(0, src.rows - 1);

	Mat SM = getAffineTransform(src_p, dst_p);
	warpAffine(src, src, SM, src.size());

	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Zoom
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int p1 = Convert::ToInt32(EP1->Text);
	int p2 = Convert::ToInt32(Ep2->Text);
	Mat src_zoom = src(Rect(0, 0,p1 ,p2));
	resize(src_zoom, src, cv::Size(), 2, 2, 0);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
     //histogramEQ
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	equalizeHist(src, src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //PowerLow
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	src.convertTo(src, CV_32F);
	float gamma = Convert::ToDouble(gammaValue->Text);
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
			src.at<float>(i, j) = powf(src.at<float>(i, j), gamma);
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Negative
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
			src.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Averaging
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernal_A = (Mat_<float>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
	kernal_A = kernal_A / 9;
	filter2D(src, src, CV_8UC1, kernal_A);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Gaussian
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernal_G = (Mat_<float>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
	kernal_G = kernal_G / 16;
	filter2D(src, src, CV_8UC1, kernal_G);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //circular
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernal_CU = (Mat_<float>(5, 5) << 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	kernal_CU = kernal_CU / 21;
	filter2D(src, src, CV_8UC1, kernal_CU);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Pyramidal
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src = imread(src_path, 0);
	Mat kernal_P = (Mat_<float>(5, 5) << 1, 2, 3, 2, 1, 2, 4, 6, 4, 2, 3, 6, 9, 6, 3, 2, 4, 6, 4, 2, 1, 2, 3, 2, 1);
	kernal_P = kernal_P / 81;
	filter2D(src, src, CV_8UC1, kernal_P);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
     //Smoothing coneFilter
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	Mat kernel_co = (Mat_<float>(5, 5) << 0, 0, 1, 0, 0, 0, 2, 2, 2, 0, 1, 2, 5, 2, 1, 0, 2, 2, 2, 0, 0, 0, 1, 0, 0);
	kernel_co = kernel_co / 25;
	filter2D(src, src, CV_8UC1, kernel_co);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Bluer
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	medianBlur(src, src, 5);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Vertical
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat dstv, dsth;
	Mat src;
	src = imread(src_path, 0);
	Sobel(src, dstv, CV_16UC1, 1, 0, 3);
	convertScaleAbs(dstv, src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Horizontal
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat dstv, dsth;
	Mat src;
	src = imread(src_path, 0);
	Sobel(src, dsth, CV_16UC1, 0, 1, 3);
	convertScaleAbs(dsth ,src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Add Sharpping
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat dstv, dsth;
	Mat src;
	src = imread(src_path, 0);
	Sobel(src, dstv, CV_16UC1, 1, 0, 3);
	convertScaleAbs(dstv, dstv);
	Sobel(src, dsth, CV_16UC1, 0, 1, 3);
	convertScaleAbs(dsth, dsth);
	addWeighted(dstv, 1, dsth, 1, 0, src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //Brightness
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	src.convertTo(src, CV_32F);
	src = src + 1;
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
			src.at<float>(i, j) = log(src.at<float>(i, j));
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //BitPlane
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int level = Convert::ToInt32(levelPlane->Text);
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++) {

			if (src.at<uchar>(i, j) & level)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = 0;
		}
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
	   //GrayLevel
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	int R1 = Convert::ToInt32(value1->Text);
	int R2 = Convert::ToInt32(value2->Text);

	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++) {
			if (src.at<uchar>(i, j) > R1 && src.at<uchar>(i, j) < R2)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = src.at<uchar>(i, j);
		}
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}

	   //threshold
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);
	Mat dst_T(src.rows, src.cols, CV_8UC1);
	int value = Convert::ToInt32(Value->Text);

	for (int r = 0; r < src.rows; r++)
	{
		for (int c = 0; c < src.cols; c++)
		{
			if (src.at<uchar>(r, c) > value)
				dst_T.at<uchar>(r, c) = 255;
			else
				dst_T.at<uchar>(r, c) = 0;
		}
	}
		imwrite(src_path, dst_T);
		pictureBox2->ImageLocation = image_path;
}
	   //EdgeBased
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat src;
	src = imread(src_path, 0);

	Mat kernel_Lap = (Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);
	filter2D(src, src, CV_8UC1, kernel_Lap);
	
	imwrite(src_path, src);
	pictureBox2->ImageLocation = image_path;
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //Compression
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ context = gcnew marshal_context();
	const char* src_path = context->marshal_as<const char*>(image_path);
	Mat cIMG = imread(src_path, 0);
	imwrite(src_path, cIMG);
	std::vector<int>params;
	params.push_back(CV_IMWRITE_JPEG_QUALITY);
	params.push_back(50);
	imwrite("C:/Users/hs247/OneDrive/Desktop/compressed.jpg", cIMG, params);
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
    //exit Menu
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Exit prpmpt", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)
	       == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}
	   //Help-->Translation
private: System::Void translationToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the value of x and y that you want to move the location of the image to", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->Rotatiob
private: System::Void rotationToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the value of the angle you want to rotate the image to", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->Flip
private: System::Void flipToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the:\n 1 to round y-axis\n 0 to round x-axis\n-1 to round xaxis and y-axis", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->Skwing
private: System::Void skwingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the:\n value of the (x,y) of 3 points for Source image that you want to Be Skewing it", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->Zoom
private: System::Void zoomToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the two end point of an image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void imageSubtractToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //Help-->imageBlinding
private: System::Void imageBlindingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the:\n percentage of picture", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->imageSubtract
private: System::Void imageSubtractToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the:\n percentage of picture", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->powerLow
private: System::Void powerLowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the value of Gamma\n from 0.9 to 0.1 it be brightness\n from 1 it be Darkness", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->bitPlane
private: System::Void bitPlaneToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the plane level you want it can be\n 1, 2, 4, 8, 16, 25, 32, 64, 128", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->grayLevel
private: System::Void grayLevelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the Range of pixel value.", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //Help-->threshold
private: System::Void thresholdingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Enter the value.", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Translation
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("It can Change Location of an Image ", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Rotaion
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Rotation of an image by angle is achieved by the transformation matrix", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
	   //About-->Flip
private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(" It can be as mirror in x , y axis", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Zoom
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("It is zooming an image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
	   //About-->Skwing
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Used to skew an image to make it straight ", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Blinding
private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("It can combine the image and the background in complementary proportions to each other", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Subtract
private: System::Void toolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("It can remove the background from the image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->PowerLow
private: System::Void toolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("brightness and darkness of an image depend on the gamma value ", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Bit Plane
private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Converting a gray level image to a binary image.\nImage Compression", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->gray level
private: System::Void toolStripMenuItem12_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Used to make an object more clear", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Equalization
private: System::Void equalizationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("It improve image contrast", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Brigtness
private: System::Void brightnessToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("brightness of an image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Negative
private: System::Void negativeeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Used for enhancing white or grey detail embedded in dark regions of an image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Negative
private: System::Void gaussianToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Used for enhancing white or grey detail embedded in dark regions of an image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Smoothing
private: System::Void smoothingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Remove spark noise", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Sharpping
private: System::Void edgeDetectionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("used to detect the edges of image", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Median bluer
private: System::Void saltAndPepperToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Remove Salt and pepper noise while preserving edges", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->Thresholding:
private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Used For One Object With One Background To Separate the object from the background", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->EdgeBased
private: System::Void edgeBasedToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("use derivative filter", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	   //About-->𝑪𝒐𝒎𝒑𝒓𝒆𝒔𝒔𝒊𝒐𝒏
private: System::Void comperssionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("It reduces the image size", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
