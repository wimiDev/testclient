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
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
		/// 必需的设计器变量。
		
		
		
	public:
		static bool IsInterrupt=false;
		static String^ RcIP;
		static Int32 RcPort;
		static NetworkStream^stream;
		static TcpClient^client;
		static array<Byte>^Rdata;//读取数据缓存区
		static array<Byte>^Wdata;//发送数据缓存区
		static String^ConnetStatc;
		static String^ClientStatc;
	private: System::Windows::Forms::TextBox^  txtPort;
	private: System::Windows::Forms::Label^  label4;

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
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
			this->label1->Text = L"实时动作信息";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"连接状态";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"服务器IP";
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
			this->interrupt->Text = L"断开连接";
			this->interrupt->UseVisualStyleBackColor = true;
			this->interrupt->Click += gcnew System::EventHandler(this, &Form1::interrupt_Click);
			// 
			// connet
			// 
			this->connet->Location = System::Drawing::Point(272, 233);
			this->connet->Name = L"connet";
			this->connet->Size = System::Drawing::Size(106, 32);
			this->connet->TabIndex = 7;
			this->connet->Text = L"连接";
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
			this->label4->Text = L"端口号";
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
				 System::Windows::Forms::Timer^ClientTimer = gcnew System::Windows::Forms::Timer();//创建定时器
				 ClientTimer->Tick+=gcnew System::EventHandler(this, &Client::Form1::OnTick);//创建定时器事件响应方法
				 ClientTimer->Interval = 500;//设置定时时间
				 ClientTimer->Start();//定时器开始工作
	}
	private:void CreateClient()
	{
				try
				{
				//create a tcpclient
					IPAddress^ nIP;
					if (!System::Net::IPAddress::TryParse(txtIP->Text, nIP))
					{
						showstatc->Text = "输入的IP地址格式不正确";
						return;
					}
					
				String^ cIP = Convert::ToString(txtIP->Text);
				RcIP = cIP;
				nIP = nIP->Parse(RcIP);
				Int32 cPort = Convert::ToInt32(txtPort->Text);//转换格式
					RcPort = cPort;
					showstatc->Text = "正在向IP为" + cIP+"的服务器发起连接";
					connetstatc->Text = "未连接";
					Rdata = gcnew array<Byte>(1024);//初始化缓存区
					Wdata = gcnew array<Byte>(1024);
					IsInterrupt = false;
					
					client = gcnew TcpClient();//填入IP和端口号完成客户端创建
						client->Connect(nIP, cPort);
						//client->Connect(RcIP, cPort);
					if (client ->Connected)
					{
						connetstatc->Text = "已连接";
						MessageBox::Show("已连接");
					}
				}
				catch (Exception^e)
				{
					ConnetStatc = "未连接";
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
				 ConnetStatc = "未连接";
				 if (stream != nullptr)
				 {
					 stream->Close();
					 ClientStatc = "客户端将断开连接";
				 }
				 if (client != nullptr)
					 client->Close();
				 else
					 ClientStatc = "当前没有可用连接";
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
					ConnetStatc = "已连接";
					form1->client->GetStream()->EndWrite(CResult);
					stream = form1->client->GetStream();
					while (!IsInterrupt)
					{
						Wdata = Encoding::ASCII->GetBytes("fuck");
						stream->Write(Wdata, 0, Wdata->Length);
						stream->Read(Rdata, 0, Rdata->Length);
						ClientStatc = "客户端收到：" + Encoding::ASCII->GetString(Rdata, 0, Rdata->Length);
						Thread::Sleep(2000);
					}
				}
				catch (Exception^e)
				{
					if (IsInterrupt)
						return;
					try{
					ClientStatc=Convert::ToString(e);
					ConnetStatc = "未连接";
					Form1^form1;
					if (form1->client != nullptr)
					{
						form1->client->Close();
						ClientStatc = "客户端将断开重连";
					}
					if (stream != nullptr)
						stream->Close();
					Rdata = gcnew array<Byte>(1024);
					Wdata = gcnew array<Byte>(1024);
					IsInterrupt = false;
					ClientStatc = "客户端向服务端发送连接请求";
					form1->client = gcnew TcpClient(RcIP, RcPort);//填入IP和端口号完成客户端创建
					AsyncCallback^ ClientCallback =
						gcnew AsyncCallback(client_Interrupt_detection);
					form1->client->GetStream()->BeginWrite(Wdata, 0, Wdata->Length, ClientCallback, form1);
					return;
					}
					catch (Exception^e)
					{
						ClientStatc = "客户端不再发起连接";
						ConnetStatc = "未连接";
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
					ClientStatc ="客户端发送："+ Convert::ToString(data);
					stream->Write(data, 0, data->Length);
					stream->Read(data, 0, data->Length);
					//MessageBox::Show("客户端收到：" + Encoding::ASCII->GetString(data, 0, data->Length));
					ClientStatc = "客户端收到：" + Encoding::ASCII->GetString(data, 0, data->Length);
				}
				catch (Exception^e)
				{
					if (IsInterrupt)
						return;
					try{
						MessageBox::Show(Convert::ToString(e));
						ConnetStatc = "未连接";
						Form1^form1;
						if (form1->client != nullptr)

						{
							form1->client->Close();
							ClientStatc = "客户端将断开重连";
						}
						if (stream != nullptr)
							stream->Close();

						data = gcnew array<Byte>(1024);
						IsInterrupt = false;
						ClientStatc = "客户端向服务端发送连接请求";
						form1->client = gcnew TcpClient(RcIP, RcPort);//填入IP和端口号完成客户端创建
						AsyncCallback^ ClientCallback =
							gcnew AsyncCallback(client_Interrupt_detection);
						form1->client->GetStream()->BeginWrite(data, 0, data->Length, ClientCallback, form1);
						return;
					}
					catch (Exception^e)
					{
						ClientStatc = "客户端不再发起连接";
						ConnetStatc = "未连接";
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
