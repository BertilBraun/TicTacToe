#pragma once
#include <Windows.h>

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
	private: System::Windows::Forms::Button^  A1;
	private: System::Windows::Forms::Button^  A2;
	private: System::Windows::Forms::Button^  A3;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Button^  C3;
	private: System::Windows::Forms::Button^  C2;
	private: System::Windows::Forms::Button^  C1;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  botGameToolStripMenuItem;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->botGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(264, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->botGameToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(48, 21);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// botGameToolStripMenuItem
			// 
			this->botGameToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->botGameToolStripMenuItem->Name = L"botGameToolStripMenuItem";
			this->botGameToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->botGameToolStripMenuItem->Text = L"Bot Game";
			this->botGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::botGame);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->exitToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->helpToolStripMenuItem,
					this->aboutToolStripMenuItem1
			});
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 21);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(108, 22);
			this->aboutToolStripMenuItem1->Text = L"About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem1_Click);
			// 
			// A1
			// 
			this->A1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A1->Location = System::Drawing::Point(12, 36);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(75, 75);
			this->A1->TabIndex = 1;
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->A1->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->A1->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// A2
			// 
			this->A2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A2->Location = System::Drawing::Point(93, 36);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(75, 75);
			this->A2->TabIndex = 2;
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->A2->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->A2->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// A3
			// 
			this->A3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A3->Location = System::Drawing::Point(174, 36);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(75, 75);
			this->A3->TabIndex = 3;
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->A3->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->A3->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// B3
			// 
			this->B3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B3->Location = System::Drawing::Point(174, 117);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(75, 75);
			this->B3->TabIndex = 4;
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->B3->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->B3->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// B2
			// 
			this->B2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->Location = System::Drawing::Point(93, 117);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(75, 75);
			this->B2->TabIndex = 5;
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->B2->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->B2->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// B1
			// 
			this->B1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->Location = System::Drawing::Point(12, 117);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(75, 75);
			this->B1->TabIndex = 6;
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->B1->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->B1->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// C3
			// 
			this->C3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C3->Location = System::Drawing::Point(174, 198);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(75, 75);
			this->C3->TabIndex = 7;
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->C3->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->C3->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// C2
			// 
			this->C2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2->Location = System::Drawing::Point(93, 198);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(75, 75);
			this->C2->TabIndex = 8;
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->C2->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->C2->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// C1
			// 
			this->C1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1->Location = System::Drawing::Point(12, 198);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(75, 75);
			this->C1->TabIndex = 9;
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::Click);
			this->C1->MouseEnter += gcnew System::EventHandler(this, &MyForm::mEnter);
			this->C1->MouseLeave += gcnew System::EventHandler(this, &MyForm::mLeave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(264, 281);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(280, 320);
			this->MinimumSize = System::Drawing::Size(280, 320);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TicTacToe";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool turn = true, BotGame = false;
		int Interactions = 0, move = 0;


private: System::Void Click(System::Object^  sender, System::EventArgs^  e) 
{
	Button^ B = (Button^)sender;

	if (turn) B->Text = L"X";
	else B->Text = L"O";

	B->Enabled = false;

	turn = !turn; Interactions++;
	Check();

	BotMove();

}


private: void Check() 
{		
	if (
		//Horizontal
		((A1->Text == A2->Text) && (A1->Text == A3->Text) && (A1->Enabled == false)) ||
		((B1->Text == B2->Text) && (B1->Text == B3->Text) && (B1->Enabled == false)) ||
		((C1->Text == C2->Text) && (C1->Text == C3->Text) && (C1->Enabled == false)) ||
		//Vertikal
		((A1->Text == B1->Text) && (A1->Text == C1->Text) && (A1->Enabled == false)) ||
		((A2->Text == B2->Text) && (A2->Text == C2->Text) && (A2->Enabled == false)) ||
		((A3->Text == B3->Text) && (A3->Text == C3->Text) && (A3->Enabled == false)) ||
		//Diagonal
		((A1->Text == B2->Text) && (A1->Text == C3->Text) && (A1->Enabled == false)) ||
		((A3->Text == B2->Text) && (A3->Text == C1->Text) && (A3->Enabled == false)))
	{
		ButtonsEnabled(false);

		if (turn) { MessageBox::Show(L"O has won!"); newGame(); }
		else { MessageBox::Show(L"X has won!"); newGame(); turn = !turn; }
	}

	else if (Interactions == 9) { MessageBox::Show("Draw"); newGame(); }
	
}


private: System::Void botGame(System::Object^  sender, System::EventArgs^  e) 
{
	newGame();
	
	if (BotGame == true)
	{
		botGameToolStripMenuItem->Text = "Dissable BotGame"; BotGame = false;
	}
	else BotGame = true;
}


private: void BotMove()
{
	
	if ((BotGame) && (!turn))
	{
		
		move = CheckForTwo("O");
		if (move == 0)
		{
			move = CheckForTwo("X");
			if (move == 0)
			{
				move = CornerMove();
				if (move == 0)
				{
					move = RandomMove();
				}
			}
		}

		
		if (move == 11) { A1->Text = L"O"; A1->Enabled = false; }
		if (move == 12) { A2->Text = L"O"; A2->Enabled = false; }
		if (move == 13) { A3->Text = L"O"; A3->Enabled = false; }
		if (move == 21) { B1->Text = L"O"; B1->Enabled = false; }
		if (move == 22) { B2->Text = L"O"; B2->Enabled = false; }
		if (move == 23) { B3->Text = L"O"; B3->Enabled = false; }
		if (move == 31) { C1->Text = L"O"; C1->Enabled = false; }
		if (move == 32) { C2->Text = L"O"; C2->Enabled = false; }
		if (move == 33) { C3->Text = L"O"; C3->Enabled = false; }

		move = 0;
		
		turn = !turn; Interactions++;
		Check();
	}

}


private: int CheckForTwo(String^ Pic)
{
	if ((A1->Text == Pic) && (A2->Text == Pic) && (A3->Text == "")) return 13;
	else if ((A2->Text == Pic) && (A3->Text == Pic) && (A1->Text == "")) return 11;
	else if ((A1->Text == Pic) && (A3->Text == Pic) && (A2->Text == "")) return 12;
	else if ((B1->Text == Pic) && (B2->Text == Pic) && (B3->Text == "")) return 23;
	else if ((B2->Text == Pic) && (B3->Text == Pic) && (B1->Text == "")) return 21;
	else if ((B1->Text == Pic) && (B3->Text == Pic) && (B2->Text == "")) return 22;
	else if ((C1->Text == Pic) && (C2->Text == Pic) && (C3->Text == "")) return 33;
	else if ((C2->Text == Pic) && (C3->Text == Pic) && (C1->Text == "")) return 31;
	else if ((C1->Text == Pic) && (C3->Text == Pic) && (C2->Text == "")) return 32;

	else if ((A1->Text == Pic) && (B1->Text == Pic) && (C1->Text == "")) return 31;
	else if ((A1->Text == Pic) && (C1->Text == Pic) && (B1->Text == "")) return 21;
	else if ((B1->Text == Pic) && (C1->Text == Pic) && (A1->Text == "")) return 11;
	else if ((A2->Text == Pic) && (B2->Text == Pic) && (C2->Text == "")) return 32;
	else if ((A2->Text == Pic) && (C2->Text == Pic) && (B2->Text == "")) return 22;
	else if ((B2->Text == Pic) && (C2->Text == Pic) && (A2->Text == "")) return 12;
	else if ((A3->Text == Pic) && (B3->Text == Pic) && (C3->Text == "")) return 33;
	else if ((A3->Text == Pic) && (C3->Text == Pic) && (B3->Text == "")) return 23;
	else if ((B3->Text == Pic) && (C3->Text == Pic) && (A3->Text == "")) return 13;

	else if ((A1->Text == Pic) && (B2->Text == Pic) && (C3->Text == "")) return 33;
	else if ((A1->Text == Pic) && (C3->Text == Pic) && (B2->Text == "")) return 22;
	else if ((B2->Text == Pic) && (C3->Text == Pic) && (A1->Text == "")) return 11;
	else if ((A3->Text == Pic) && (B2->Text == Pic) && (C1->Text == "")) return 31;
	else if ((A3->Text == Pic) && (C1->Text == Pic) && (B2->Text == "")) return 22;
	else if ((B2->Text == Pic) && (C1->Text == Pic) && (A3->Text == "")) return 13;

	else return 0;
}

private: int CornerMove()
{
	if (A1->Text == "") return 11;
	else if (A3->Text == "") return 13;
	else if (C1->Text == "") return 31;
	else if (C3->Text == "") return 33;

	else return 0;
}


private: int RandomMove()
{
	if (A2->Text == "") return 12;
	else if (B1->Text == "") return 21;
	else if (B2->Text == "") return 22;
	else if (B3->Text == "") return 23;
	else if (C2->Text == "") return 32;

	else return 0;
}


private: void newGame()
{
	Interactions = 0;
	turn = true;
	ButtonsEnabled(true);

	A1->Text = (L""); A2->Text = (L""); A3->Text = (L""); B1->Text = (L""); B2->Text = (L""); B3->Text = (L""); C1->Text = (L""); C2->Text = (L""); C3->Text = (L"");

}


private: void ButtonsEnabled(bool Pic)
	{
		A1->Enabled = Pic; A2->Enabled = Pic; A3->Enabled = Pic; B1->Enabled = Pic; B2->Enabled = Pic; B3->Enabled = Pic; C1->Enabled = Pic; C2->Enabled = Pic; C3->Enabled = Pic;
	}


private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("The player who succeeds in placing three of their marks in\na horizontal, vertical, or diagonal row wins the game.");
}


private: System::Void aboutToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("Created by:\nBertil");
}


private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	newGame();
}


private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Application::Exit();
}


private: System::Void mEnter(System::Object^  sender, System::EventArgs^  e) 
{
	Button^ B = (Button^)sender;

	if (B->Enabled)
	{
		if (turn) B->Text = L"X";
		else B->Text = L"O";
	}
}


private: System::Void mLeave(System::Object^  sender, System::EventArgs^  e) 
{
	Button^ B = (Button^)sender;

	if (B->Enabled)
	{
		if (turn) B->Text = L"";
		else B->Text = L"";
	}
}


};
}
