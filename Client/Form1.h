#pragma once
namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Threading;
	using namespace System::Timers;
	/// <summary>
	/// Form1 ժҪ
	///
	/// ����: ������Ĵ�������ƣ�����Ҫ����
	///          ����������������� .resx �ļ��������й���Դ���������ߵ�
	///          ����Դ�ļ��������ԡ�����
	///          �������������˴���Ĺ���
	///          ���ػ���Դ��ȷ������
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  showstatc;
	private: System::Windows::Forms::TextBox^  connetstatc;
	private: System::Windows::Forms::TextBox^  txtIP;
	private: System::Windows::Forms::Button^  interrupt;
	private: System::Windows::Forms::Button^  connet;






	private:
		/// <summary>
		/// ����������������
		
		
		
	public:
		static bool IsInterrupt=false;
		static String^ RcIP;
		static Int32 RcPort;
		static NetworkStream^stream;
		static TcpClient^client;
		static array<Byte>^Rdata;//��ȡ���ݻ�����
		static array<Byte>^Wdata;//�������ݻ�����
		static String^ConnetStatc;
		static String^ClientStatc;
	private: System::Windows::Forms::TextBox^  txtPort;
	private: System::Windows::Forms::Label^  label4;

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->showstatc = (gcnew System::Windows::Forms::TextBox());
			this->connetstatc = (gcnew System::Windows::Forms::TextBox());
			this->txtIP = (gcnew System::Windows::Forms::TextBox());
			this->interrupt = (gcnew System::Windows::Forms::Button());
			this->connet = (gcnew System::Windows::Forms::Button());
			this->txtPort = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ʵʱ������Ϣ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����״̬";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"������IP";
			// 
			// showstatc
			// 
			this->showstatc->Enabled = false;
			this->showstatc->Location = System::Drawing::Point(91, 25);
			this->showstatc->Multiline = true;
			this->showstatc->Name = L"showstatc";
			this->showstatc->Size = System::Drawing::Size(297, 60);
			this->showstatc->TabIndex = 3;
			// 
			// connetstatc
			// 
			this->connetstatc->Enabled = false;
			this->connetstatc->Location = System::Drawing::Point(70, 113);
			this->connetstatc->Name = L"connetstatc";
			this->connetstatc->Size = System::Drawing::Size(154, 21);
			this->connetstatc->TabIndex = 4;
			// 
			// txtIP
			// 
			this->txtIP->Location = System::Drawing::Point(70, 182);
			this->txtIP->Name = L"txtIP";
			this->txtIP->Size = System::Drawing::Size(154, 21);
			this->txtIP->TabIndex = 5;
			//this->txtIP->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// interrupt
			// 
			this->interrupt->Location = System::Drawing::Point(70, 233);
			this->interrupt->Name = L"interrupt";
			this->interrupt->Size = System::Drawing::Size(108, 32);
			this->interrupt->TabIndex = 6;
			this->interrupt->Text = L"�Ͽ�����";
			this->interrupt->UseVisualStyleBackColor = true;
			this->interrupt->Click += gcnew System::EventHandler(this, &Form1::interrupt_Click);
			// 
			// connet
			// 
			this->connet->Location = System::Drawing::Point(272, 233);
			this->connet->Name = L"connet";
			this->connet->Size = System::Drawing::Size(106, 32);
			this->connet->TabIndex = 7;
			this->connet->Text = L"����";
			this->connet->UseVisualStyleBackColor = true;
			this->connet->Click += gcnew System::EventHandler(this, &Form1::connet_Click);
			// 
			// txtPort
			// 
			this->txtPort->Location = System::Drawing::Point(73, 145);
			this->txtPort->Name = L"txtPort";
			this->txtPort->Size = System::Drawing::Size(100, 21);
			this->txtPort->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 9;
			this->label4->Text = L"�˿ں�";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 302);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPort);
			this->Controls->Add(this->connet);
			this->Controls->Add(this->interrupt);
			this->Controls->Add(this->txtIP);
			this->Controls->Add(this->connetstatc);
			this->Controls->Add(this->showstatc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Timer^ClientTimer = gcnew System::Windows::Forms::Timer();//������ʱ��
				 ClientTimer->Tick+=gcnew System::EventHandler(this, &Client::Form1::OnTick);//������ʱ���¼���Ӧ����
				 ClientTimer->Interval = 500;//���ö�ʱʱ��
				 ClientTimer->Start();//��ʱ����ʼ����
	}
	private:void CreateClient()
	{
				try
				{
				//create a tcpclient
					IPAddress^ nIP;
					if (!System::Net::IPAddress::TryParse(txtIP->Text, nIP))
					{
						showstatc->Text = "�����IP��ַ��ʽ����ȷ";
						return;
					}
					
				String^ cIP = Convert::ToString(txtIP->Text);
				RcIP = cIP;
				nIP = nIP->Parse(RcIP);
				Int32 cPort = Convert::ToInt32(txtPort->Text);//ת����ʽ
					RcPort = cPort;
					showstatc->Text = "������IPΪ" + cIP+"�ķ�������������";
					connetstatc->Text = "δ����";
					Rdata = gcnew array<Byte>(1024);//��ʼ��������
					Wdata = gcnew array<Byte>(1024);
					IsInterrupt = false;
					
					client = gcnew TcpClient();//����IP�Ͷ˿ں���ɿͻ��˴���
						client->Connect(nIP, cPort);
						//client->Connect(RcIP, cPort);
					if (client ->Connected)
					{
						connetstatc->Text = "������";
						MessageBox::Show("������");
					}
				}
				catch (Exception^e)
				{
					ConnetStatc = "δ����";
					showstatc->Text = Convert::ToString(e);
					MessageBox::Show(Convert::ToString(e));
					ClientStatc = Convert::ToString(e);
					client->Close();
				}
				
	}
	//private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//}
private: System::Void connet_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
			
			 CreateClient();
			 Wdata = Encoding::ASCII->GetBytes("fuck");
			 AsyncCallback^ ClientCallback =
				 gcnew AsyncCallback(client_Interrupt_detection);
			 client->GetStream()->BeginWrite(Wdata, 0, Wdata->Length, ClientCallback,this);
			  }
			 catch (Exception^e)
			 {
				 ClientStatc = Convert::ToString(e);
				 
			 }
}
private: System::Void interrupt_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 try
			 {
				 IsInterrupt = true;
				 ConnetStatc = "δ����";
				 if (stream != nullptr)
				 {
					 stream->Close();
					 ClientStatc = "�ͻ��˽��Ͽ�����";
				 }
				 if (client != nullptr)
					 client->Close();
				 else
					 ClientStatc = "��ǰû�п�������";
				 return;
			 }
			 catch (Exception^e)
			 {
				 showstatc->Text = Convert::ToString(e);
				 return;
			 }
}
	private:void CRebindingFunc()
	{
				try
				{
					client->Close();
					CreateClient();
					Wdata = Encoding::ASCII->GetBytes("fuck");
					AsyncCallback^ ClientCallback =
						gcnew AsyncCallback(client_Interrupt_detection);
					client->GetStream()->BeginWrite(Wdata, 0, Wdata->Length, ClientCallback, this);
				}
				catch (Exception^e)
				{
					ClientStatc = Convert::ToString(e);
				}
				
	}
	private:static void client_Interrupt_detection(IAsyncResult^ CResult)
	{
				
				try
				{
					if (IsInterrupt)
						return;
					Form1^ form1 = safe_cast<Form1^>(CResult->AsyncState);
					ConnetStatc = "������";
					form1->client->GetStream()->EndWrite(CResult);
					stream = form1->client->GetStream();
					while (!IsInterrupt)
					{
						Wdata = Encoding::ASCII->GetBytes("fuck");
						stream->Write(Wdata, 0, Wdata->Length);
						stream->Read(Rdata, 0, Rdata->Length);
						ClientStatc = "�ͻ����յ���" + Encoding::ASCII->GetString(Rdata, 0, Rdata->Length);
						Thread::Sleep(2000);
					}
				}
				catch (Exception^e)
				{
					if (IsInterrupt)
						return;
					try{
					ClientStatc=Convert::ToString(e);
					ConnetStatc = "δ����";
					Form1^form1;
					if (form1->client != nullptr)
					{
						form1->client->Close();
						ClientStatc = "�ͻ��˽��Ͽ�����";
					}
					if (stream != nullptr)
						stream->Close();
					Rdata = gcnew array<Byte>(1024);
					Wdata = gcnew array<Byte>(1024);
					IsInterrupt = false;
					ClientStatc = "�ͻ��������˷�����������";
					form1->client = gcnew TcpClient(RcIP, RcPort);//����IP�Ͷ˿ں���ɿͻ��˴���
					AsyncCallback^ ClientCallback =
						gcnew AsyncCallback(client_Interrupt_detection);
					form1->client->GetStream()->BeginWrite(Wdata, 0, Wdata->Length, ClientCallback, form1);
					return;
					}
					catch (Exception^e)
					{
						ClientStatc = "�ͻ��˲��ٷ�������";
						ConnetStatc = "δ����";
						IsInterrupt = true;
						return;
					}
				}
	}
			void OnTick(System::Object ^sender, System::EventArgs ^e)
			{
				showstatc->Text = ClientStatc;
				connetstatc->Text = ConnetStatc;
			}
			/*static void OnCRTick(System::Object ^sender, System::EventArgs ^e)
			{
				try{
					data = Encoding::ASCII->GetBytes("fuck");
					ClientStatc ="�ͻ��˷��ͣ�"+ Convert::ToString(data);
					stream->Write(data, 0, data->Length);
					stream->Read(data, 0, data->Length);
					//MessageBox::Show("�ͻ����յ���" + Encoding::ASCII->GetString(data, 0, data->Length));
					ClientStatc = "�ͻ����յ���" + Encoding::ASCII->GetString(data, 0, data->Length);
				}
				catch (Exception^e)
				{
					if (IsInterrupt)
						return;
					try{
						MessageBox::Show(Convert::ToString(e));
						ConnetStatc = "δ����";
						Form1^form1;
						if (form1->client != nullptr)

						{
							form1->client->Close();
							ClientStatc = "�ͻ��˽��Ͽ�����";
						}
						if (stream != nullptr)
							stream->Close();

						data = gcnew array<Byte>(1024);
						IsInterrupt = false;
						ClientStatc = "�ͻ��������˷�����������";
						form1->client = gcnew TcpClient(RcIP, RcPort);//����IP�Ͷ˿ں���ɿͻ��˴���
						AsyncCallback^ ClientCallback =
							gcnew AsyncCallback(client_Interrupt_detection);
						form1->client->GetStream()->BeginWrite(data, 0, data->Length, ClientCallback, form1);
						return;
					}
					catch (Exception^e)
					{
						ClientStatc = "�ͻ��˲��ٷ�������";
						ConnetStatc = "δ����";
						IsInterrupt = true;
						return;
					}

				}
			}*/
};
}



/*void Client::Form1::OnTick(System::Object ^sender, System::EventArgs ^e)
{
	Form1^form1;
	form1->showstatc->Text = ClientStatc;
	form1->connetstatc->Text = ConnetStatc;
}*/


//void Client::Form1::OnTick(System::Object ^sender, System::EventArgs ^e)
//{
	//throw gcnew System::NotImplementedException();
//}
