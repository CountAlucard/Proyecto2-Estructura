#pragma once

#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <msclr\marshal_cppstd.h>
#include <array>
#define SIZE 6895;

namespace SortingAlgorithms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  timer;
	private: System::Windows::Forms::Timer^  tmr;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->tmr = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(13, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(88, 611);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(213, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Bubble Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(213, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Quick Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(213, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Merge Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(213, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Heap Sort";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(414, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(89, 612);
			this->richTextBox2->TabIndex = 7;
			this->richTextBox2->Text = L"";
			// 
			// timer
			// 
			this->timer->AutoSize = true;
			this->timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timer->Location = System::Drawing::Point(208, 599);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(0, 25);
			this->timer->TabIndex = 8;
			this->timer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tmr
			// 
			this->tmr->Interval = 1000;
			this->tmr->Tick += gcnew System::EventHandler(this, &MyForm::tmr_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 217);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 636);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->timer);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
void bubbleSort(int *a, int n) //Algoritmo de Bubble Sort
{ 
	int k, j, temp;
	for (k = 1; k <= n - 1; k++) {
		for (j = 0; j <= n - k - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
} 

void quickSort(int *a, int beg, int end) //Algoritmo de Quick Sort
{
	int pivotLoc;
	if (beg < end) {
		partitionArray(a, beg, end, &pivotLoc);	//Esto encontrara la localizacion del pivote y particionara el arreglo
		quickSort(a, beg, pivotLoc - 1);	//quick sort el sub arreglo izquierdo
		quickSort(a, pivotLoc + 1, end);	//quick sort el sub arreglo derecho
	}
}

void partitionArray(int *a, int beg, int end, int *pivotLoc)
{
	int left = beg;		//inicialmente left apunta al primer elemento del arreglo
	int right = end;	//inicialmente right apunta al ultimo elemento del arreglo
	*pivotLoc = left;	//inicialmente el pivote apunta al primer elemento del arreglo
	int tmp;	//se utilizara la variable tmp para alternar valores

	while (1) {

		//pivote apuntando a la izquierda
		while (a[*pivotLoc] <= a[right] && *pivotLoc != right) {	//el elemento del pivote <= el elemento de la derecha
			right--;	//move right one position towards left
		}

		if (*pivotLoc == right) {	//ambos izquierda y Derecha apuntan al mismo elemento del arreglo
			break;
		}
		else if (a[*pivotLoc] > a[right]) {
			//el elemento del pivote es mayor que el elemento derecho. intercambiamos el elemento del pivote con el de la derecha.
			tmp = a[right];
			a[right] = a[*pivotLoc];
			a[*pivotLoc] = tmp;
			*pivotLoc = right;	//el pivote ahora apunta a la derecha.
		}

		//pivote apuntando a la derecha
		while (a[*pivotLoc] >= a[left] && *pivotLoc != left) {	//pel elemento del pivote >= el elemento de la izquierda
			left++;		//movemos la izquierda un espacio hacia la derecha
		}

		if (*pivotLoc == left) {	//ambos izquierda y Derecha apuntan al mismo elemento del arreglo
			break;
		}
		else if (a[*pivotLoc] < a[left]) {
			//el elemento del pivote es menor al elemento de la izquierda. intercambiamos el elemento del pivote con el de la izquierda.
			tmp = a[left];
			a[left] = a[*pivotLoc];
			a[*pivotLoc] = tmp;
			*pivotLoc = left;	//el pivote ahora apunta a la izquierda.
		}
	}
}

void mergeSort(int *a, int beg, int end) {
	int mid;
	if (beg < end) {
		mid = (beg + end) / 2;
		mergeSort(a, beg, mid);
		mergeSort(a, mid + 1, end);
		mergeSortedArray(a, beg, mid, mid + 1, end);
	}
}

void mergeSortedArray(int *a, int lbeg, int lend, int rbeg, int rend) {
	int pa = lbeg, pb = rbeg, pt = lbeg, tmp[6895];
	while (pa <= lend && pb <= rend) {
		if (a[pa] < a[pb]) {
			tmp[pt++] = a[pa++];
		}
		else {
			tmp[pt++] = a[pb++];
		}
	}
	if (pa > lend) {
		while (pb <= rend) {	//left sub array exhausted
			tmp[pt++] = a[pb++];
		}
	}
	else {
		while (pa <= lend) {	//right sub array exhausted
			tmp[pt++] = a[pa++];
		}
	}

	//write sorted element in array a
	for (pt = lbeg; pt <= rend; pt++) {
		a[pt] = tmp[pt];
	}
}

void max_heapify(int *a, int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i;

	while(j<=n)
	{
		if(j < n && a[j+1] > a[j])
		{
			j = j + 1;
		}

		if(temp > a[j])
		{
			break;
		}

		else if(temp <= a[j])
		{
			a[j / 2] = a[j];
			j = 2 * j;
		}
	}

	a[j / 2] = temp;
}

void heapSort(int *a, int n)
{
	int i, temp;

	for (i = n; i >= 2; i--)
	{
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		max_heapify(a, 1, i - 1);
	}
}

void build_maxHeap(int *a, int n)
{
	int i;

	for (int i = n / 2; i >= 1; i--)
	{
		max_heapify(a, i, n);
	}
}

int seconds = 0;
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)  //Bubble Sort
	{
		tmr->Enabled = true;
		tmr->Start();
		std::string myNumbers[7000];
		int myValues[7000];
		std::string::size_type sz;

		for (int i = 0; i < richTextBox1->Lines->Length; i++)
		{
			myNumbers[i] = msclr::interop::marshal_as<std::string>(richTextBox1->Lines[i]->ToString());
		}

		for (int i = 0; i < richTextBox1->Lines->Length; i++)
		{
			myValues[i] = std::stoi(myNumbers[i], &sz);
		}

		bubbleSort(myValues, richTextBox1->Lines->Length);
		
		for (int i = 0; i < richTextBox1->Lines->Length; i++)
		{
			richTextBox2->Text += Convert::ToString(myValues[i]) + "\n";
		}
		tmr->Stop();
		timer->Text = seconds.ToString() + " Seconds";

	}

private: System::Void tmr_Tick(System::Object^  sender, System::EventArgs^  e) { //Timer para tomar el tiempo de cuanto tarda cada algoritmo en ordenar los valores
	seconds++;
}
		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) //Quick Sort
{
	std::string myNumbers[7000];
	int myValues[7000];
	std::string::size_type sz;

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		myNumbers[i] = msclr::interop::marshal_as<std::string>(richTextBox1->Lines[i]->ToString());
	}

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		myValues[i] = std::stoi(myNumbers[i], &sz);
	}

	quickSort(myValues, 0, 6894);

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		richTextBox2->Text += Convert::ToString(myValues[i]) + "\n";
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::string myNumbers[7000];
	int myValues[7000];
	std::string::size_type sz;

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		myNumbers[i] = msclr::interop::marshal_as<std::string>(richTextBox1->Lines[i]->ToString());
	}

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		myValues[i] = std::stoi(myNumbers[i], &sz);
	}

	mergeSort(myValues, 0, 6894);

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		richTextBox2->Text += Convert::ToString(myValues[i]) + "\n";
	}
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	std::string myNumbers[7000];
	int myValues[7000];
	std::string::size_type sz;

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		myNumbers[i] = msclr::interop::marshal_as<std::string>(richTextBox1->Lines[i]->ToString());
	}

	for (int i = 0; i < richTextBox1->Lines->Length; i++)
	{
		myValues[i] = std::stoi(myNumbers[i], &sz);
	}
	
	build_maxHeap(myValues, 6895);
	heapSort(myValues, 6895);

	for (int i = 1; i <= richTextBox1->Lines->Length; i++)
	{
		richTextBox2->Text += Convert::ToString(myValues[i]) + "\n";
	}
}
};
}
