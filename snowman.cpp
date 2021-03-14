#include <iostream>
#include <string>
#include "snowman.hpp"
#include <stdexcept>


using namespace ariel;

namespace ariel{

    //final varibles
    int const INPUT_LENGTH = 8;

    int const HAT = 0;
    int const NOSE = 1;
    int const LEFT_EYE = 2;
    int const RIGHT_EYE = 3;
    int const LEFT_ARM = 4;
    int const RIGHT_ARM = 5;
    int const TORSO = 6;
    int const BASE = 7;


    //function declarations
    bool check_input(std::string input);
    std::string make_snowman(std::string input_string);





    std::string  snowman(int input){
        //converting int to string.
        std::string input_string = std::to_string(input);
        std::string snowman;

        //running input checks ,if fails throw runtime error.
        if(!check_input(input_string)){
            //std::cout<<"input check works"<<std::endl;
            throw std::runtime_error("Input must be a positive integer with each number between 1-4");
        }

        snowman = make_snowman(input_string);


        return snowman;
    }


    //this function checks if the user input is correct.
    bool check_input(std::string input){

        //checking input lenght
        if(input.length() != INPUT_LENGTH){
            return false;
        }

        //checking each number in input if legal (1-4)
        int num = 0;
        std::string temp;
        for(int i = 0 ; i<input.length();i++){
             temp = input[i];
             num = std::stoi(temp);
            if(num>4 || num<1){
                return false;
            }
        }
        return true;
    }

    std::string make_snowman(std::string input_string){
        std::string new_snowman;

        //print hat
        switch (input_string[HAT]){
            case '1':
                new_snowman = " _===_";
                break;

            case '2':
                new_snowman = " ___ \n.....";
                break;

            case '3':
                new_snowman = "  _  \n /_\\ ";
                break;

            case '4':
                new_snowman = " ___ \n(_*_)";
                break;
            }

        //print upper left hand

        switch (input_string[LEFT_ARM]){
            case '2':
                new_snowman = new_snowman + "\n\\";
                break;
            default :
                new_snowman = new_snowman + "\n ";

        }

        // print head
        new_snowman = new_snowman + "(";
         //print left eye
        switch (input_string[LEFT_EYE]){
            case '1':
                new_snowman = new_snowman + ".";
                break;
            case '2':
                new_snowman = new_snowman + "o";
                break;
            case '3':
                new_snowman = new_snowman + "O";
                break;
            case '4':
                new_snowman = new_snowman + "-";
                break;

        }
        //print nose
        switch (input_string[NOSE]){
            case '1':
                new_snowman = new_snowman + ",";
                break;
            case '2':
                new_snowman = new_snowman + ".";
                break;
            case '3':
                new_snowman = new_snowman + "_";
                break;
            case '4':
                new_snowman = new_snowman + " ";
                break;

        }

         //print right eye
        switch (input_string[RIGHT_EYE]){
            case '1':
                new_snowman = new_snowman + ".";
                break;
            case '2':
                new_snowman = new_snowman + "o";
                break;
            case '3':
                new_snowman = new_snowman + "O";
                break;
            case '4':
                new_snowman = new_snowman + "-";
                break;

        }
        new_snowman = new_snowman + ")";

        //print right upper hand
        switch (input_string[RIGHT_ARM]){
            case '2':
                new_snowman = new_snowman + "/\n";
                break;
            default :
                new_snowman = new_snowman + " \n";

        }

        //print left hand
        switch (input_string[LEFT_ARM]){
            case '1':
                new_snowman = new_snowman + "<";
                break;
            case '3':
                new_snowman = new_snowman + "/";
                break;
            case '4':
                new_snowman = new_snowman + " ";
                break;
        }

        //print torso
        new_snowman = new_snowman + "(";

        switch (input_string[TORSO]){
            case '1':
                new_snowman = new_snowman + " : ";
                break;
            case '2':
                new_snowman = new_snowman + "] [";
                break;
            case '3':
                new_snowman = new_snowman + "> <";
                break;
            case '4':
                new_snowman = new_snowman + "   ";
                break;
        }
        new_snowman = new_snowman + ")";

        //print right hand
        switch (input_string[RIGHT_ARM]){
            case '1':
                new_snowman = new_snowman + ">";
                break;
            case '3':
                new_snowman = new_snowman + "\\";
                break;
            case '4':
                new_snowman = new_snowman + " ";
                break;
        }
        new_snowman = new_snowman + "\n";

        //print base
        new_snowman = new_snowman + " (";
        switch (input_string[BASE]){
            case '1':
                new_snowman = new_snowman + " : ";
                break;
            case '2':
                new_snowman = new_snowman + "\" \"";
                break;
            case '3':
                new_snowman = new_snowman + "___";
                break;
            case '4':
                new_snowman = new_snowman + "   ";
                break;
        }
        new_snowman = new_snowman + ")";



        

        


        //print left arm

        //print right arm

        //print torso

        //print base



        return new_snowman;
    }




}

   

  

