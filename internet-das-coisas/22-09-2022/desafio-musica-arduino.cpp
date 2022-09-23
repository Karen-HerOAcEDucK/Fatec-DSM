int node_SOL = 790;
int node_FA  = 704;
int node_FA_ = 746;
int node_LA  = 888;
int node_SI  = 996;
int node_RE  = 592;
int node_DO  = 528;
int node_MI  = 665;
int buzzer = 9;
int seg = 700;

void setup(){
    pinMode(buzzer, OUTPUT);
}

void loop(){
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_FA_ , 250);
    tone(buzzer, node_SOL , 250);

    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_FA_ , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_LA , 250);
    tone(buzzer, node_SI , 250);
    tone(buzzer, node_LA , 250);

    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_FA_ , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_RE , 250);

    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_LA , 250);
    tone(buzzer, node_RE , 250);
    tone(buzzer, node_RE , 250);
    tone(buzzer, node_DO , 250);
    tone(buzzer, node_SI , 250);
    tone(buzzer, node_LA , 250);

    tone(buzzer, node_SI , 250);
    tone(buzzer, node_DO , 250);
    tone(buzzer, node_SI , 250);
    tone(buzzer, node_LA , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_FA_ , 250);
    tone(buzzer, node_SOL , 250);

    tone(buzzer, node_FA_ , 250);
    tone(buzzer, node_FA_ , 250);
    tone(buzzer, node_SOL , 250);
    tone(buzzer, node_LA , 250);
    tone(buzzer, node_SI , 250);
    tone(buzzer, node_SI , 250);
    tone(buzzer, node_LA , 250);
    tone(buzzer, node_SOL , 250);

}

// SOL SOL SOL SOL FA# SOL
// SOL FA# SOL LÁ SI LA
// SOL SOL SOL SOL FA# SOL SOL RE↓
// SOL LA RE↓ RE↑ DO SI LA
// SI DO SI LA SOL FA# SOL
// FA# FA# SOL LA SI LA SOL 