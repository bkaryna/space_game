#include "planet.h"

void defeat(){
    cout<<endl;
    cout<<"     ___                   _____   _____ ___ \n";
    cout<<"    / __|__ _ _ __  ___   / _ \\ \\ / / __| _ \\\n";
    cout<<"   | (_ / _` | '  \\/ -_) | (_) \\ V /| _||   /\n";
    cout<<"    \\___\\__,_|_|_|_\\___|  \\___/ \\_/ |___|_|_\\\n";
//

}
void victory(){
    cout<<endl;
    cout<<"     ____                            _         _       _   _                 _  "<<endl;
    cout<<"    / ___|___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_(_) ___  _ __  ___| |"<<endl;
    cout<<"   | |   / _ \\| '_ \\ / _` | '__/ _` | __| | | | |/ _` | __| |/ _ \\| '_ \\/ __| |"<<endl;
    cout<<"   | |__| (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \\__ \\_|"<<endl;
    cout<<"    \\____\\___/|_| |_|\\__, |_|  \\__,_|\\__|\\__,_|_|\\__,_|\\__|_|\\___/|_| |_|___(_)"<<endl;
    cout<<"       ____            |___/                    _                  __             "<<endl;
    cout<<"      / ___|_ __ ___  __ _| |_ _   _ _ __ ___  (_)___   ___  __ _ / _| ___        "<<endl;
    cout<<"     | |   | '__/ _ \\/ _` | __| | | | '__/ _ \\ | / __| / __|/ _` | |_ / _ \\       "<<endl;
    cout<<"     | |___| | |  __/ (_| | |_| |_| | | |  __/ | \\__ \\ \\__ \\ (_| |  _|  __/       "<<endl;
    cout<<"      \\____|_|  \\___|\\__,_|\\__|\\__,_|_|  \\___| |_|___/ |___/\\__,_|_|  \\___|       "<<endl;
    cout<<"\t\t                           *     .--.\n";
    cout<<"\t\t                                / /  `\n";
    cout<<"\t\t               +               | |\n";
    cout<<"\t\t                      '         \\ \\__,\n";
    cout<<"\t\t                  *          +   '--'  *\n";
    cout<<"\t\t                      +   /\\\n";
    cout<<"\t\t         +              .'  '.   *\n";
    cout<<"\t\t                *      /======\\      +\n";
    cout<<"\t\t                      ;:.  _   ;\n";
    cout<<"\t\t                      |:. (_)  |\n";
    cout<<"\t\t                      |:.  _   |\n";
    cout<<"\t\t            +         |:. (_)  |          *\n";
    cout<<"\t\t                      ;:.      ;\n";
    cout<<"\t\t                    .' \\:.    / `.\n";
    cout<<"\t\t                   / .-'':._.'`-. \\\n";
    cout<<"\t\t                   |/    /||\\    \\|\n";
    cout<<"\t\t                 _..--\"\"\"````\"\"\"--.._\n";
    cout<<"\t\t           _.-'``                    ``'-.\n";
    cout<<"\t\t         -'                                '-\n";
    cout<<"\n";
}

int main() {
    Creature Teodor('$', 3,5);
    Planet Rect001("Rect001", 60,20,&Teodor);

    srand(time(0));
    int homeX, homeY;
    do{
        homeX = rand() % Rect001.getHeight() - 2 + 2;
        homeY = rand() % Rect001.getWidth() - 2 + 2;
    } while (homeX==Teodor.getX()&&homeY==Teodor.getY());

    bool result=false;
    int ch=0;
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    WINDOW * win = newwin(500, 500, 0, 0);
    do{
        Rect001.showPlanet(homeX,homeY);
        printw("\nPress q to Exit\n");
        ch=getch();
        switch(ch) {
            case KEY_UP:
                Rect001.moveUP();
                break;
            case KEY_DOWN:
                Rect001.moveDOWN();
                break;
            case KEY_LEFT:
                Rect001.moveLEFT();
                break;
            case KEY_RIGHT:
                Rect001.moveRIGHT();
                break;
        }
        wrefresh(win);
        move(0,0);

        if (Teodor.getX()==homeX&&Teodor.getY()==homeY) {
            result=true;
            break;
        }

    } while (ch != 'q'&&Teodor.getLives()>0);
    printw("\nExiting Now\n");
    endwin();

    if (result)
        victory();
    else
        defeat();

    return 0;
}
