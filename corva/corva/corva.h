#pragma once

namespace corva {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de corva
	/// </summary>
	public ref class corva : public System::Windows::Forms::Form
	{
	public:
		corva(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~corva()
		{
			if (components)
			{
				delete components;
			}
		}
	private: VisualPlus::Toolkit::Controls::Interactivity::VisualButton^  visualButton1;
	private: VisualPlus::Toolkit::Controls::Interactivity::VisualButton^  BtnCerrar;
	private: VisualPlus::Toolkit::Controls::Interactivity::VisualButton^  BtnMinimizar;


	private: VisualPlus::Toolkit::Controls::Interactivity::VisualButton^  BtnMaximizar;






	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			VisualPlus::Structure::Gradient^  gradient1 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient2 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient3 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient4 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Border^  border1 = (gcnew VisualPlus::Structure::Border());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(corva::typeid));
			VisualPlus::Structure::Gradient^  gradient5 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient6 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient7 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient8 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Border^  border2 = (gcnew VisualPlus::Structure::Border());
			VisualPlus::Structure::Gradient^  gradient9 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient10 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient11 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient12 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Border^  border3 = (gcnew VisualPlus::Structure::Border());
			VisualPlus::Structure::Gradient^  gradient13 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient14 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient15 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Gradient^  gradient16 = (gcnew VisualPlus::Structure::Gradient());
			VisualPlus::Structure::Border^  border4 = (gcnew VisualPlus::Structure::Border());
			this->visualButton1 = (gcnew VisualPlus::Toolkit::Controls::Interactivity::VisualButton());
			this->BtnCerrar = (gcnew VisualPlus::Toolkit::Controls::Interactivity::VisualButton());
			this->BtnMinimizar = (gcnew VisualPlus::Toolkit::Controls::Interactivity::VisualButton());
			this->BtnMaximizar = (gcnew VisualPlus::Toolkit::Controls::Interactivity::VisualButton());
			this->SuspendLayout();
			// 
			// visualButton1
			// 
			this->visualButton1->Background = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->visualButton1->BackgroundDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->visualButton1->BackgroundStateColor = System::Drawing::Color::Empty;
			this->visualButton1->Border->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->visualButton1->Border->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->visualButton1->Border->HoverVisible = true;
			this->visualButton1->Border->Rounding = 6;
			this->visualButton1->Border->Thickness = 1;
			this->visualButton1->Border->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			this->visualButton1->Border->Visible = true;
			gradient1->Angle = 0;
			gradient1->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
						static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
							static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)))
			};
			gradient1->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient2->Angle = 0;
			gradient2->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
					static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
							static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)))
			};
			gradient2->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient3->Angle = 0;
			gradient3->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
					static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
						static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
							static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)))
			};
			gradient3->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient4->Angle = 0;
			gradient4->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
						static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
							static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243)))
			};
			gradient4->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			this->visualButton1->ControlBrushCollection = gcnew cli::array< VisualPlus::Structure::Gradient^  >(4)
			{
				gradient1, gradient2,
					gradient3, gradient4
			};
			this->visualButton1->DisabledGradient = gradient4;
			this->visualButton1->EnabledGradient = gradient1;
			this->visualButton1->ForeColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->visualButton1->HoverGradient = gradient2;
			border1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			border1->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			border1->HoverVisible = false;
			border1->Rounding = 6;
			border1->Thickness = 1;
			border1->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			border1->Visible = false;
			this->visualButton1->Image->Border = border1;
			this->visualButton1->Image->Image = (cli::safe_cast<System::Drawing::Bitmap^>(resources->GetObject(L"resource.Image")));
			this->visualButton1->Image->Point = System::Drawing::Point(69, 27);
			this->visualButton1->Image->Size = System::Drawing::Size(24, 24);
			this->visualButton1->Image->Visible = false;
			this->visualButton1->Location = System::Drawing::Point(0, 0);
			this->visualButton1->MouseState = VisualPlus::Enumerators::MouseStates::Normal;
			this->visualButton1->Name = L"visualButton1";
			this->visualButton1->PressedGradient = gradient3;
			this->visualButton1->Size = System::Drawing::Size(162, 79);
			this->visualButton1->TabIndex = 0;
			this->visualButton1->Text = L"CORvA";
			this->visualButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->visualButton1->TextRenderingHint = System::Drawing::Text::TextRenderingHint::ClearTypeGridFit;
			// 
			// BtnCerrar
			// 
			this->BtnCerrar->Background = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BtnCerrar->BackgroundDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BtnCerrar->BackgroundStateColor = System::Drawing::Color::Empty;
			this->BtnCerrar->Border->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->BtnCerrar->Border->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->BtnCerrar->Border->HoverVisible = true;
			this->BtnCerrar->Border->Rounding = 6;
			this->BtnCerrar->Border->Thickness = 1;
			this->BtnCerrar->Border->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			this->BtnCerrar->Border->Visible = true;
			gradient5->Angle = 0;
			gradient5->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
						static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
							static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)))
			};
			gradient5->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient6->Angle = 0;
			gradient6->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
					static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
							static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)))
			};
			gradient6->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient7->Angle = 0;
			gradient7->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
					static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
						static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
							static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)))
			};
			gradient7->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient8->Angle = 0;
			gradient8->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
						static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
							static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243)))
			};
			gradient8->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			this->BtnCerrar->ControlBrushCollection = gcnew cli::array< VisualPlus::Structure::Gradient^  >(4)
			{
				gradient5, gradient6, gradient7,
					gradient8
			};
			this->BtnCerrar->DisabledGradient = gradient8;
			this->BtnCerrar->EnabledGradient = gradient5;
			this->BtnCerrar->ForeColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->BtnCerrar->HoverGradient = gradient6;
			border2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			border2->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			border2->HoverVisible = false;
			border2->Rounding = 6;
			border2->Thickness = 1;
			border2->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			border2->Visible = false;
			this->BtnCerrar->Image->Border = border2;
			this->BtnCerrar->Image->Image = (cli::safe_cast<System::Drawing::Bitmap^>(resources->GetObject(L"resource.Image1")));
			this->BtnCerrar->Image->Point = System::Drawing::Point(1, 2);
			this->BtnCerrar->Image->Size = System::Drawing::Size(24, 24);
			this->BtnCerrar->Image->Visible = false;
			this->BtnCerrar->Location = System::Drawing::Point(999, 0);
			this->BtnCerrar->MouseState = VisualPlus::Enumerators::MouseStates::Normal;
			this->BtnCerrar->Name = L"BtnCerrar";
			this->BtnCerrar->PressedGradient = gradient7;
			this->BtnCerrar->Size = System::Drawing::Size(27, 28);
			this->BtnCerrar->TabIndex = 1;
			this->BtnCerrar->Text = L"X";
			this->BtnCerrar->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->BtnCerrar->TextRenderingHint = System::Drawing::Text::TextRenderingHint::ClearTypeGridFit;
			this->BtnCerrar->Click += gcnew System::EventHandler(this, &corva::BtnCerrar_Click);
			// 
			// BtnMinimizar
			// 
			this->BtnMinimizar->Background = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BtnMinimizar->BackgroundDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BtnMinimizar->BackgroundStateColor = System::Drawing::Color::Empty;
			this->BtnMinimizar->Border->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->BtnMinimizar->Border->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->BtnMinimizar->Border->HoverVisible = true;
			this->BtnMinimizar->Border->Rounding = 6;
			this->BtnMinimizar->Border->Thickness = 1;
			this->BtnMinimizar->Border->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			this->BtnMinimizar->Border->Visible = true;
			gradient9->Angle = 0;
			gradient9->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
						static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
							static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)))
			};
			gradient9->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient10->Angle = 0;
			gradient10->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
					static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
							static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)))
			};
			gradient10->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient11->Angle = 0;
			gradient11->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
					static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
						static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
							static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)))
			};
			gradient11->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient12->Angle = 0;
			gradient12->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
						static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
							static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243)))
			};
			gradient12->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			this->BtnMinimizar->ControlBrushCollection = gcnew cli::array< VisualPlus::Structure::Gradient^  >(4)
			{
				gradient9, gradient10,
					gradient11, gradient12
			};
			this->BtnMinimizar->DisabledGradient = gradient12;
			this->BtnMinimizar->EnabledGradient = gradient9;
			this->BtnMinimizar->ForeColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->BtnMinimizar->HoverGradient = gradient10;
			border3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			border3->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			border3->HoverVisible = false;
			border3->Rounding = 6;
			border3->Thickness = 1;
			border3->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			border3->Visible = false;
			this->BtnMinimizar->Image->Border = border3;
			this->BtnMinimizar->Image->Image = (cli::safe_cast<System::Drawing::Bitmap^>(resources->GetObject(L"resource.Image2")));
			this->BtnMinimizar->Image->Point = System::Drawing::Point(1, 2);
			this->BtnMinimizar->Image->Size = System::Drawing::Size(24, 24);
			this->BtnMinimizar->Image->Visible = false;
			this->BtnMinimizar->Location = System::Drawing::Point(933, 0);
			this->BtnMinimizar->MouseState = VisualPlus::Enumerators::MouseStates::Normal;
			this->BtnMinimizar->Name = L"BtnMinimizar";
			this->BtnMinimizar->PressedGradient = gradient11;
			this->BtnMinimizar->Size = System::Drawing::Size(27, 28);
			this->BtnMinimizar->TabIndex = 2;
			this->BtnMinimizar->Text = L"_";
			this->BtnMinimizar->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->BtnMinimizar->TextRenderingHint = System::Drawing::Text::TextRenderingHint::ClearTypeGridFit;
			// 
			// BtnMaximizar
			// 
			this->BtnMaximizar->Background = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BtnMaximizar->BackgroundDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BtnMaximizar->BackgroundStateColor = System::Drawing::Color::Empty;
			this->BtnMaximizar->Border->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->BtnMaximizar->Border->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->BtnMaximizar->Border->HoverVisible = true;
			this->BtnMaximizar->Border->Rounding = 6;
			this->BtnMaximizar->Border->Thickness = 1;
			this->BtnMaximizar->Border->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			this->BtnMaximizar->Border->Visible = true;
			gradient13->Angle = 0;
			gradient13->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
						static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
							static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)))
			};
			gradient13->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient14->Angle = 0;
			gradient14->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
					static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
							static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(181)))
			};
			gradient14->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient15->Angle = 0;
			gradient15->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
					static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
						static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(166))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)),
							static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)))
			};
			gradient15->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			gradient16->Angle = 0;
			gradient16->Colors = gcnew cli::array< System::Drawing::Color >(3)
			{
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
						static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
							static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243)))
			};
			gradient16->Positions = gcnew cli::array< System::Single >(3) { 0, 0.5F, 1 };
			this->BtnMaximizar->ControlBrushCollection = gcnew cli::array< VisualPlus::Structure::Gradient^  >(4)
			{
				gradient13, gradient14,
					gradient15, gradient16
			};
			this->BtnMaximizar->DisabledGradient = gradient16;
			this->BtnMaximizar->EnabledGradient = gradient13;
			this->BtnMaximizar->ForeColorDisabled = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(129)));
			this->BtnMaximizar->HoverGradient = gradient14;
			border4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			border4->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			border4->HoverVisible = false;
			border4->Rounding = 6;
			border4->Thickness = 1;
			border4->Type = VisualPlus::Enumerators::ShapeType::Rounded;
			border4->Visible = false;
			this->BtnMaximizar->Image->Border = border4;
			this->BtnMaximizar->Image->Image = (cli::safe_cast<System::Drawing::Bitmap^>(resources->GetObject(L"resource.Image3")));
			this->BtnMaximizar->Image->Point = System::Drawing::Point(1, 2);
			this->BtnMaximizar->Image->Size = System::Drawing::Size(24, 24);
			this->BtnMaximizar->Image->Visible = false;
			this->BtnMaximizar->Location = System::Drawing::Point(966, 0);
			this->BtnMaximizar->MouseState = VisualPlus::Enumerators::MouseStates::Normal;
			this->BtnMaximizar->Name = L"BtnMaximizar";
			this->BtnMaximizar->PressedGradient = gradient15;
			this->BtnMaximizar->Size = System::Drawing::Size(27, 28);
			this->BtnMaximizar->TabIndex = 2;
			this->BtnMaximizar->Text = L"[ ]";
			this->BtnMaximizar->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->BtnMaximizar->TextRenderingHint = System::Drawing::Text::TextRenderingHint::ClearTypeGridFit;
			this->BtnMaximizar->Click += gcnew System::EventHandler(this, &corva::BtnMaximizar_Click);
			// 
			// corva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 540);
			this->Controls->Add(this->BtnMaximizar);
			this->Controls->Add(this->BtnMinimizar);
			this->Controls->Add(this->BtnCerrar);
			this->Controls->Add(this->visualButton1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"corva";
			this->Text = L"corva";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void visualPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
	}

	private: System::Void BtnCerrar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Application::Exit();
	}
	private: System::Void BtnMaximizar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
	}
};
}
