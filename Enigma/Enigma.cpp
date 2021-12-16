#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

#include <limits>

#include <iomanip>

#include <ctime>

int main()
{
    bool r{ 1 };
    do{
        //declaring variables
        int d{9};
        int r{1};

        std::cout << "this encoder/decoder will not encode or decode quotes (\"\) or backslashes (\\\)\nenter 0 to encode and 1 to decode\n";
        std::cin >> d;
        if (d == 0)do{
        
            //declaring variables 
            long long o{}, l{};
            std::string n, k, ll;
            do {
        
                //detirmines which number to output
                //randomized every time
                //possibly outputting a different number every time a character is entered
                o = (rand() % 2/*change this value to how many numbers there are for each character*/);
                o = o + 1;
                n = "";
                l = 0000;

                std::cout << "enter charcters one at a time to be encoded\n";
                std::cin >> n;

                {
                    //takes character "a" and outputs either 196 or 200 into long long l
                    //which number is outputted to l is detirmined by "o = (rand() % 2)" and "o = o + 1" see above
                    if (n == "a") {
                        //add more of the following function to every character and do the same below with random numbers to increase complication
                        if (o == 1) {

                            l = 196;

                        }

                        if (o == 2) {

                            l = 200;

                        }

                    }

                    {

                        if (n == "b") {

                            if (o == 1) {

                                l = 104;

                            }
                            if (o == 2) {

                                l = 68;

                            }

                        }
                        if (n == "c") {

                            if (o == 1) {

                                l = 89;

                            }
                            if (o == 2) {

                                l = 28;

                            }

                        }
                        if (n == "d") {

                            if (o == 1) {

                                l = 27;

                            }
                            if (o == 2) {

                                l = 62;

                            }

                        }
                        if (n == "e") {

                            if (o == 1) {

                                l = 74;

                            }
                            if (o == 2) {

                                l = 52;

                            }

                        }
                        if (n == "f") {

                            if (o == 1) {

                                l = 125;

                            }
                            if (o == 2) {

                                l = 75;

                            }

                        }
                        if (n == "g") {

                            if (o == 1) {

                                l = 1;

                            }
                            if (o == 2) {

                                l = 165;

                            }

                        }
                        if (n == "h") {

                            if (o == 1) {

                                l = 99;

                            }
                            if (o == 2) {

                                l = 162;

                            }

                        }
                        if (n == "i") {

                            if (o == 1) {

                                l = 185;

                            }
                            if (o == 2) {

                                l = 155;

                            }

                        }
                        if (n == "j") {

                            if (o == 1) {

                                l = 56;

                            }
                            if (o == 2) {

                                l = 166;

                            }

                        }
                        if (n == "k") {

                            if (o == 1) {

                                l = 12;

                            }
                            if (o == 2) {

                                l = 197;

                            }

                        }
                        if (n == "l") {

                            if (o == 1) {

                                l = 78;

                            }
                            if (o == 2) {

                                l = 124;

                            }

                        }
                        if (n == "m") {

                            if (o == 1) {

                                l = 107;

                            }
                            if (o == 2) {

                                l = 154;

                            }

                        }
                        if (n == "n") {

                            if (o == 1) {

                                l = 153;

                            }
                            if (o == 2) {

                                l = 134;

                            }

                        }
                        if (n == "o") {

                            if (o == 1) {

                                l = 33;

                            }
                            if (o == 2) {

                                l = 20;

                            }

                        }
                        if (n == "p") {

                            if (o == 1) {

                                l = 96;

                            }
                            if (o == 2) {

                                l = 71;

                            }

                        }
                        if (n == "q") {

                            if (o == 1) {

                                l = 186;

                            }
                            if (o == 2) {

                                l = 142;

                            }

                        }
                        if (n == "r") {

                            if (o == 1) {

                                l = 41;

                            }
                            if (o == 2) {

                                l = 114;

                            }

                        }
                        if (n == "s") {

                            if (o == 1) {

                                l = 119;

                            }
                            if (o == 2) {

                                l = 67;

                            }

                        }
                        if (n == "t") {

                            if (o == 1) {

                                l = 48;

                            }
                            if (o == 2) {

                                l = 23;

                            }

                        }
                        if (n == "u") {

                            if (o == 1) {

                                l = 152;

                            }
                            if (o == 2) {

                                l = 136;

                            }

                        }
                        if (n == "v") {

                            if (o == 1) {

                                l = 192;

                            }
                            if (o == 2) {

                                l = 82;

                            }

                        }
                        if (n == "w") {

                            if (o == 1) {

                                l = 110;

                            }
                            if (o == 2) {

                                l = 70;

                            }

                        }
                        if (n == "x" & n != "xxx") {

                            if (o == 1) {

                                l = 193;

                            }
                            if (o == 2) {

                                l = 145;

                            }

                        }
                        if (n == "y") {

                            if (o == 1) {

                                l = 184;

                            }
                            if (o == 2) {

                                l = 156;

                            }

                        }
                        if (n == "z") {

                            if (o == 1) {

                                l = 61;

                            }
                            if (o == 2) {

                                l = 164;

                            }

                        }
                        if (n == "A") {

                            if (o == 1) {

                                l = 191;

                            }
                            if (o == 2) {

                                l = 57;

                            }

                        }
                        if (n == "B") {

                            if (o == 1) {

                                l = 35;

                            }
                            if (o == 2) {

                                l = 112;

                            }

                        }
                        if (n == "C") {

                            if (o == 1) {

                                l = 32;

                            }
                            if (o == 2) {

                                l = 169;

                            }

                        }
                        if (n == "D") {

                            if (o == 1) {

                                l = 116;

                            }
                            if (o == 2) {

                                l = 188;

                            }

                        }
                        if (n == "E") {

                            if (o == 1) {

                                l = 131;

                            }
                            if (o == 2) {

                                l = 152;

                            }

                        }
                        if (n == "F") {

                            if (o == 1) {

                                l = 128;

                            }
                            if (o == 2) {

                                l = 157;

                            }

                        }
                        if (n == "G") {

                            if (o == 1) {

                                l = 172;

                            }
                            if (o == 2) {

                                l = 140;

                            }

                        }
                        if (n == "H") {

                            if (o == 1) {

                                l = 183;

                            }
                            if (o == 2) {

                                l = 175;

                            }

                        }
                        if (n == "I") {

                            if (o == 1) {

                                l = 170;

                            }
                            if (o == 2) {

                                l = 177;

                            }

                        }
                        if (n == "J") {

                            if (o == 1) {

                                l = 30;

                            }
                            if (o == 2) {

                                l = 38;

                            }

                        }
                        if (n == "K") {

                            if (o == 1) {

                                l = 109;

                            }
                            if (o == 2) {

                                l = 163;

                            }

                        }
                        if (n == "L") {

                            if (o == 1) {

                                l = 122;

                            }
                            if (o == 2) {

                                l = 8;

                            }

                        }
                        if (n == "M") {

                            if (o == 1) {

                                l = 21;

                            }
                            if (o == 2) {

                                l = 97;

                            }

                        }
                        if (n == "N") {

                            if (o == 1) {

                                l = 25;

                            }
                            if (o == 2) {

                                l = 16;

                            }

                        }
                        if (n == "O") {

                            if (o == 1) {

                                l = 3;

                            }
                            if (o == 2) {

                                l = 110;

                            }

                        }
                        if (n == "P") {

                            if (o == 1) {

                                l = 106;

                            }
                            if (o == 2) {

                                l = 133;

                            }

                        }
                        if (n == "Q") {

                            if (o == 1) {

                                l = 98;

                            }
                            if (o == 2) {

                                l = 70;

                            }

                        }
                        if (n == "R") {

                            if (o == 1) {

                                l = 87;

                            }
                            if (o == 2) {

                                l = 149;

                            }

                        }
                        if (n == "S") {

                            if (o == 1) {

                                l = 105;

                            }
                            if (o == 2) {

                                l = 158;

                            }

                        }
                        if (n == "T") {

                            if (o == 1) {

                                l = 138;

                            }
                            if (o == 2) {

                                l = 113;

                            }

                        }
                        if (n == "U") {

                            if (o == 1) {

                                l = 64;

                            }
                            if (o == 2) {

                                l = 88;

                            }

                        }
                        if (n == "V") {

                            if (o == 1) {

                                l = 4;

                            }
                            if (o == 2) {

                                l = 167;

                            }

                        }
                        if (n == "W") {

                            if (o == 1) {

                                l = 15;

                            }
                            if (o == 2) {

                                l = 190;

                            }

                        }
                        if (n == "X") {

                            if (o == 1) {

                                l = 36;

                            }
                            if (o == 2) {

                                l = 66;

                            }

                        }
                        if (n == "Y") {

                            if (o == 1) {

                                l = 168;

                            }
                            if (o == 2) {

                                l = 144;

                            }

                        }
                        if (n == "Z") {

                            if (o == 1) {

                                l = 160;

                            }
                            if (o == 2) {

                                l = 37;

                            }

                        }
                        if (n == ",") {

                            if (o == 1) {

                                l = 49;

                            }
                            if (o == 2) {

                                l = 141;

                            }

                        }
                        if (n == "<") {

                            if (o == 1) {

                                l = 91;

                            }
                            if (o == 2) {

                                l = 123;

                            }

                        }
                        if (n == ".") {

                            if (o == 1) {

                                l = 195;

                            }
                            if (o == 2) {

                                l = 171;

                            }

                        }
                        if (n == ">") {

                            if (o == 1) {

                                l = 148;

                            }
                            if (o == 2) {

                                l = 72;

                            }

                        }
                        if (n == "/") {

                            if (o == 1) {

                                l = 180;

                            }
                            if (o == 2) {

                                l = 73;

                            }

                        }
                        if (n == "?") {

                            if (o == 1) {

                                l = 7;

                            }
                            if (o == 2) {

                                l = 127;

                            }

                        }
                        if (n == ";") {

                            if (o == 1) {

                                l = 60;

                            }
                            if (o == 2) {

                                l = 77;

                            }

                        }
                        if (n == ":") {

                            if (o == 1) {

                                l = 93;

                            }
                            if (o == 2) {

                                l = 137;

                            }

                        }
                        if (n == "'") {

                            if (o == 1) {

                                l = 63;

                            }
                            if (o == 2) {

                                l = 101;

                            }

                        }
                        if (n == "[") {

                            if (o == 1) {

                                l = 22;

                            }
                            if (o == 2) {

                                l = 59;

                            }

                        }
                        if (n == "{") {

                            if (o == 1) {

                                l = 19;

                            }
                            if (o == 2) {

                                l = 151;

                            }

                        }
                        if (n == "]") {

                            if (o == 1) {

                                l = 34;

                            }
                            if (o == 2) {

                                l = 120;

                            }

                        }
                        if (n == "}") {

                            if (o == 1) {

                                l = 55;

                            }
                            if (o == 2) {

                                l = 24;

                            }

                        }
                        if (n == "|") {

                            if (o == 1) {

                                l = 174;

                            }
                            if (o == 2) {

                                l = 76;

                            }

                        }
                        if (n == "=") {

                            if (o == 1) {

                                l = 53;

                            }
                            if (o == 2) {

                                l = 40;

                            }

                        }
                        if (n == "+") {

                            if (o == 1) {

                                l = 47;

                            }
                            if (o == 2) {

                                l = 86;

                            }

                        }
                        if (n == "-") {

                            if (o == 1) {

                                l = 84;

                            }
                            if (o == 2) {

                                l = 54;

                            }

                        }
                        if (n == "_") {

                            if (o == 1) {

                                l = 18;

                            }
                            if (o == 2) {

                                l = 118;

                            }

                        }
                        if (n == "0") {

                            if (o == 1) {

                                l = 6;

                            }
                            if (o == 2) {

                                l = 81;

                            }

                        }
                        if (n == ")") {

                            if (o == 1) {

                                l = 115;

                            }
                            if (o == 2) {

                                l = 132;

                            }

                        }
                        if (n == "9") {

                            if (o == 1) {

                                l = 194;

                            }
                            if (o == 2) {

                                l = 65;

                            }

                        }
                        if (n == "(") {

                            if (o == 1) {

                                l = 198;

                            }
                            if (o == 2) {

                                l = 13;

                            }

                        }
                        if (n == "8") {

                            if (o == 1) {

                                l = 9;

                            }
                            if (o == 2) {

                                l = 58;

                            }

                        }
                        if (n == "*") {

                            if (o == 1) {

                                l = 51;

                            }
                            if (o == 2) {

                                l = 189;

                            }

                        }
                        if (n == "7") {

                            if (o == 1) {

                                l = 79;

                            }
                            if (o == 2) {

                                l = 17;

                            }

                        }
                        if (n == "&") {

                            if (o == 1) {

                                l = 102;

                            }
                            if (o == 2) {

                                l = 26;

                            }

                        }
                        if (n == "6") {

                            if (o == 1) {

                                l = 179;

                            }
                            if (o == 2) {

                                l = 178;

                            }

                        }
                        if (n == "^") {

                            if (o == 1) {

                                l = 126;

                            }
                            if (o == 2) {

                                l = 69;

                            }

                        }
                        if (n == "5") {

                            if (o == 1) {

                                l = 139;

                            }
                            if (o == 2) {

                                l = 147;

                            }

                        }
                        if (n == "%") {

                            if (o == 1) {

                                l = 130;

                            }
                            if (o == 2) {

                                l = 121;

                            }

                        }
                        if (n == "4") {

                            if (o == 1) {

                                l = 161;

                            }
                            if (o == 2) {

                                l = 80;

                            }

                        }
                        if (n == "$") {

                            if (o == 1) {

                                l = 31;

                            }
                            if (o == 2) {

                                l = 100;

                            }

                        }
                        if (n == "3") {

                            if (o == 1) {

                                l = 14;

                            }
                            if (o == 2) {

                                l = 5;

                            }

                        }
                        if (n == "#") {

                            if (o == 1) {

                                l = 2;

                            }
                            if (o == 2) {

l = 83;

                            }

                        }
                        if (n == "2") {

                            if (o == 1) {

                                l = 199;

                            }
                            if (o == 2) {

                                l = 85;

                            }

                        }
                        if (n == "@") {

                            if (o == 1) {

                                l = 50;

                            }
                            if (o == 2) {

                                l = 143;

                            }

                        }
                        if (n == "1") {

                            if (o == 1) {

                                l = 103;

                            }
                            if (o == 2) {

                                l = 29;

                            }

                        }
                        if (n == "!") {

                            if (o == 1) {

                                l = 146;

                            }
                            if (o == 2) {

                                l = 46;

                            }

                        }
                        if (n == "`") {

                            if (o == 1) {

                                l = 150;

                            }
                            if (o == 2) {

                                l = 159;

                            }

                        }
                        if (n == "~") {

                            if (o == 1) {

                                l = 108;

                            }
                            if (o == 2) {

                                l = 156;

                            }

                        }

                        if (n == "xxx" & n != "x") {

                            r = 0;
                            l = 1111;

                        }

                    }

                }

                std::cout << l << "\n";

                //changing long long to string
                std::stringstream ss;
                ss << l;
                ss >> k;

                //putting the number at the end of the string
                ll = ll += k;
                //adding "_" after every entry 
                ll = ll += "_";

                
            } while (r == 1);//repeats until r != 1, r changes when entering "xxx"

            //clears system
            system("cls");

            //outputs code
            std::cout << "\n" << ll << "\n";
    
            std::cout << "enter 0 to encode or 1 to decode\n";
            std::cin >> d;

        }while (d == 0);


        if(d == 1) do {
            //declaring variables
            long long n;
            std::string l, ll;

            r = 1;

            do {
                std::cout << "enter number in code\n";

                std::cin >> n;
                {
                    //takes either 196 or 200 and outputs "a"
                    if (n == 196 || n == 200/*add " || n == ___" with the same values entered above for every character to increase complication*/) {

                        l = "a";

                    }

                    {
                        if (n == 104 || n == 68) {

                            l = "b";

                        }
                        if (n == 89 || n == 28) {

                            l = "c";

                        }
                        if (n == 27 || n == 62) {

                            l = "d";

                        }
                        if (n == 74 || n == 52) {

                            l = "e";

                        }
                        if (n == 125 || n == 75) {

                            l = "f";

                        }
                        if (n == 1 || n == 165) {

                            l = "g";

                        }
                        if (n == 99 || n == 162) {

                            l = "h";

                        }
                        if (n == 185 || n == 155) {

                            l = "i";

                        }
                        if (n == 56 || n == 166) {

                            l = "j";

                        }
                        if (n == 12 || n == 197) {

                            l = "k";

                        }
                        if (n == 78 || n == 124) {

                            l = "l";

                        }
                        if (n == 107 || n == 154) {

                            l = "m";

                        }
                        if (n == 153 || n == 134) {

                            l = "n";

                        }
                        if (n == 33 || n == 20) {

                            l = "o";

                        }
                        if (n == 96 || n == 71) {

                            l = "p";

                        }
                        if (n == 186 || n == 142) {

                            l = "q";

                        }
                        if (n == 41 || n == 114) {

                            l = "r";

                        }
                        if (n == 119 || n == 67) {

                            l = "s";

                        }
                        if (n == 48 || n == 23) {

                            l = "t";

                        }
                        if (n == 152 || n == 136) {

                            l = "u";

                        }
                        if (n == 192 || n == 82) {

                            l = "v";

                        }
                        if (n == 110 || n == 70) {

                            l = "w";

                        }
                        if (n == 193 || n == 145) {

                            l = "x";

                        }
                        if (n == 182 || n == 156) {

                            l = "y";

                        }
                        if (n == 61 || n == 164) {

                            l = "z";

                        }
                        if (n == 191 || n == 57) {

                            l = "A";

                        }
                        if (n == 35 || n == 112) {

                            l = "B";

                        }
                        if (n == 32 || n == 169) {

                            l = "C";

                        }
                        if (n == 116 || n == 188) {

                            l = "D";

                        }
                        if (n == 131 || n == 152) {

                            l = "E";

                        }
                        if (n == 128 || n == 157) {

                            l = "F";

                        }
                        if (n == 172 || n == 140) {

                            l = "G";

                        }
                        if (n == 175 || n == 183) {

                            l = "H";

                        }
                        if (n == 170 || n == 177) {

                            l = "I";

                        }
                        if (n == 30 || n == 38) {

                            l = "J";

                        }
                        if (n == 109 || n == 163) {

                            l = "K";

                        }
                        if (n == 122 || n == 8) {

                            l = "L";

                        }
                        if (n == 21 || n == 97) {

                            l = "M";

                        }
                        if (n == 25 || n == 16) {

                            l = "N";

                        }
                        if (n == 3 || n == 110) {

                            l = "O";

                        }
                        if (n == 106 || n == 133) {

                            l = "P";

                        }
                        if (n == 98 || n == 70) {

                            l = "Q";

                        }
                        if (n == 87 || n == 149) {

                            l = "R";

                        }
                        if (n == 105 || n == 158) {

                            l = "S";

                        }
                        if (n == 138 || n == 113) {

                            l = "T";

                        }
                        if (n == 64 || n == 88) {

                            l = "U";

                        }
                        if (n == 4 || n == 167) {

                            l = "V";

                        }
                        if (n == 15 || n == 190) {

                            l = "W";

                        }
                        if (n == 36 || n == 66) {

                            l = "X";

                        }
                        if (n == 168 || n == 144) {

                            l = "Y";

                        }
                        if (n == 160 || n == 37) {

                            l = "Z";

                        }
                        if (n == 49 || n == 141) {

                            l = ",";

                        }
                        if (n == 91 || n == 123) {

                            l = "<";

                        }
                        if (n == 195 || n == 171) {

                            l = ".";

                        }
                        if (n == 148 || n == 72) {

                            l = ">";

                        }
                        if (n == 180 || n == 73) {

                            l = "/";

                        }
                        if (n == 7 || n == 127) {

                            l = "?";

                        }
                        if (n == 60 || n == 77) {

                            l = ";";

                        }
                        if (n == 93 || n == 137) {

                            l = ":";

                        }
                        if (n == 63 || n == 159) {

                            l = "'";

                        }
                        if (n == 22 || n == 59) {

                            l = "[";

                        }
                        if (n == 19 || n == 151) {

                            l = "{";

                        }
                        if (n == 34 || n == 120) {

                            l = "]";

                        }
                        if (n == 55 || n == 24) {

                            l = "}";

                        }
                        if (n == 174 || n == 76) {

                            l = "|";

                        }
                        if (n == 84 || n == 54) {

                            l = "-";

                        }
                        if (n == 18 || n == 118) {

                            l = "_";

                        }
                        if (n == 53 || n == 40) {

                            l = "=";

                        }
                        if (n == 47 || n == 86) {

                            l = "+";

                        }
                        if (n == 6 || n == 81) {

                            l = "0";

                        }
                        if (n == 115 || n == 132) {

                            l = ")";

                        }
                        if (n == 194 || n == 65) {

                            l = "9";

                        }
                        if (n == 198 || n == 13) {

                            l = "(";

                        }
                        if (n == 9 || n == 58) {

                            l = "8";

                        }
                        if (n == 51 || n == 189) {

                            l = "*";

                        }
                        if (n == 79 || n == 17) {

                            l = "7";

                        }
                        if (n == 102 || n == 26) {

                            l = "&";

                        }
                        if (n == 179 || n == 178) {

                            l = "6";

                        }
                        if (n == 126 || n == 69) {

                            l = "^";

                        }
                        if (n == 139 || n == 147) {

                        l = "5";

                        }
                        if (n == 130 || n == 121) {

                            l = "%";

                        }
                        if (n == 161 || n == 80) {

                            l = "4";

                        }
                        if (n == 31 || n == 100) {

                            l = "$";

                        }
                        if (n == 14 || n == 5) {

                            l = "3";

                        }
                        if (n == 2 || n == 83) {

                            l = "#";

                        }
                        if (n == 199 || n == 85) {

                        l = "2";

                        }
                        if (n == 50 || n == 143) {

                            l = "@";

                        }
                        if (n == 103 || n == 29) {

                            l = "1";

                        }
                        if (n == 146 || n == 46) {

                            l = "!";

                        }
                        if (n == 159 || n == 161) {

                            l = "`";

                        }
                        if (n == 150 || n == 155) {

                            l = "~";

                        }
                        if (n == 108 || n == 156) {

                            l = " ";

                        }
                        if (n == 1111) {

                            r = 0;

                        }

                        ll = ll += l;
                    }

                }

            } while (r == 1);//repeats until r != 1, r changes when entering "1111"

            {
                std::cout << ll << "\n";

                //outputs decode
                std::cout << "enter 0 to decode or 1 to encode\n";
                std::cin >> d;

                //clears system
                system("cls");
            }

        }while (d == 1);

        if (d != 1 && d != 0) {

            std::cout << "not acceptable\n";
            //pauses until you press a button
            system("pause");
            //clears system
            system("cls");

        }

    }while (r == 1);

}