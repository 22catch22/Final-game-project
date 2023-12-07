#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <chrono>
#include <thread>

using namespace std;
int main(){

  char intro[] =
  
"|||||NIGHTWORLD|||||\n"
 "The universe hates you.\n"
   "When you were ten, your mom was hit by a drunk driver on his way to an AA meeting. When you were fifteen, your dad decided to join her by blowing his brains out one Christmas morning\n"
   "When you graduated from college, the economy crashed.HARD. That engineering job you'd been working towards turned to mist.\n"
   "To make ends meet, you had to bite the bullet and get a job at the local e-commerce giant as a 'warehouse associate'.\n"
   "One day, during a particularly grueling shift, you were carrying a heavy package, praying that your spine wouldn't collapse, when your legs suddenly gave out. Your head hit the concrete floor of the warehouse. Sparks flashed in front of your eyes. \n"
   "You come to with a coppery taste in your mouth and a killer headache. You groan, spitting out a mouthful of blood and clutching your forehead. You take a moment to get your bearings. It's then that you realize that you're no longer in the warehouse. You're not even sure you're on earth.\n"
   "This world is a land of decay. All around you are decrepit, abandoned buildings. The street you're standing on is covered in cracks. Strange, sickly-looking weeds push their way through the asphalt. The sky is a sheet of inky black; the only light comes from a few dying streetlamps.\n"
   "'Hello?' You yell. Your voice is swallowed up by the darkness. There's no reply. There's no noise whatsoever. Nothing but your frantic breathing and the thunderous beating of your heart\n";
    for (int i =0; i < sizeof(intro); i++)
   {
    cout << intro[i];
    Sleep(10);
    }

    int i = 1;
    while (i<10)
    { 
        Sleep(10);
        cout << "To the right, you see a decaying courtyard with a fountain\n";
        Sleep(1000);
       cout<< "On your left, you see a dilapadated skyscraper. A few lights flicker inside.\n";
         Sleep(1000);
        cout << "In front of you, you see the crumbling road.\n";
         Sleep(1000);
        cout<<"Behind you is an alien forest encroaching on the dead city\n";
         Sleep(1000);
        cout<< "So, where are you going to go? Right, Left, Front, or Back?\n";
        
        string path1;
        cin >> path1;
            
            if (path1 == "right")
            {   cout << "You decide to check out the courtyard and the fountain"<< endl;
                Sleep(1000);
                cout<< "As you enter the courtyard, you realize that you're actually kind of thirsty. Really thirsty. Your throat feels like sandpaper. Your mouth is tacky and rubbery." <<endl;
                Sleep(1000);
                cout << "Desperate for hydration, you peer into the fountain. The water has a wierd, oily sheen on top of it, but otherwise it's perfectly clean." <<endl;
                Sleep(1000);
                cout << "What are you going to do? Will you drink? Or will you move on?" << endl;
            
                
               
                string path2;
                cin>> path2;
                if (path2 == "drink"){
              cout << "you scoop up some of the water and slurp it up. It's lukewarm, with a wierd metallic aftertaste, but it's drinkable\n" <<endl;
                Sleep(1000);
                cout<< "With you thirst appeased, you wipe your mouth and sit down beside the fountain. Things seem a little less bleak now\n"<<endl;
                Sleep(1000);
                cout<<"Sure, you still have no idea where you are or how you got here. Your only survival training were a few YouTube videos you watched out of sheer boredom a few years ago. You have no weapons, no food, and no idea what to do next.\n" <<endl;
                Sleep(1000);
                cout<<"But at least you have water. Positives. You need to focus on the positives.\n"<<endl;
                Sleep(1000);
                cout << "You look around a little\n" <<endl;
                Sleep(1000);
                cout << "You suddenly get the uneasy feeling that you're being watched. The hairs on the back of your neck start pricking up." <<endl;
                Sleep(1000);
                cout << "Your eyes dart across the courtyard. You can't see anything, but you know in your gut that something's there. Something inhuman. Something horrible."<<endl;
                Sleep(1000);
                cout << "What do you do? Will you run, or will you hide?"<<endl;

                string path9;
                cin >> path9;
                if (path9 == "hide")
                {
                 cout<<"You take cover behind a concrete planter, curling yourself into a ball, making yourself as small as possible\n." <<endl;
                 Sleep(1000);
                 cout << "The feeling becomes stronger and stronger. You hear pavement cracking and crunching, as if being trod on by something incredibly heavy. It takes every bit of willpower you have not to scream." <<endl;
                 Sleep(1000);
                 cout<<"Finally, mercifully, the feeling starts to ebb. You huddle there a little longer until you're absolutely sure the entity is gone, then poke your head up." <<endl;
                 Sleep(1000);
                 cout<<"You see a massive footprint impressed into the concrete, accompanied by massive claw marks. You shudder to think what would have happened if that thing had found you."<<endl;
                 Sleep(1000);
                }


                }
            }
             
      string path3;
      cin >> path3;
        if (path1 == "left")
      cout << "You summon whatever scraps of courage you have left and slowly, deliberately walk towards the decaying skyscraper\n" <<endl;
        Sleep(1000);
        cout << "The moment you walk past the front doors, you're hit with the smell of neglect. Inside the 'scraper, the air reeks of mold, dust, mildew and rot.\n" <<endl;
        Sleep(1000);
        cout << "You walk through the building and into an abandoned office, dominated by rows of identical grey cubicles. Motivational posters and cheap paintings line the walls, faded but still dripping with corporate saccharine.\n" <<endl;
        Sleep(1000);
        cout << "You notice a vending machine, or something that looks like a vending machine, on the wall, its glass smashed out but otherwise functioning. It looks like it's still working. Your stomach starts growling; it's been a while since you last ate. \n" <<endl;
        Sleep(1000);
        cout << "You walk up to the machine. You don't recognize any of the brandsl; the labels are written in a language you don't recognize- like tiny scorpions tangled together.\n"<<endl;
        Sleep(1000);
        cout << "Just as you're about to snag a candy bar, your hand stops. Something's not right. This place is clearly abandoned. Someone smashed the glass, yet the machine is fully stocked.\n" <<endl;    
        Sleep(1000);
        cout << "So, what are you going to do? Will you take a candy bar, or leave them alone?\n" <<endl;
        string path4;
        cin >> path4;
        if (path4 == "take candy bar")
        {
          cout<< "slowly, you reach your hand into the machine. The moment your hand brushes the candy bar, you know you just made a huge mistake.\n" <<endl;
          cout <<"You die";
            break;
        }
        if (path4 == "leave them alone")
        {
            cout<< "You slowly retract your hand. You'd rather not take any chances.";
            cout << "Moving along, you slowly walk through the rows of cubicles, looking for anything that might concievably be useful";
            cout << "You don't find much.";
        
        }

 

        string path6;
        cin >> path6;
        if (path1 == "front")
        {
        cout << "You walk down the deserted road, trying to keep your heart from pounding its way out of your chest" <<endl;
        Sleep(1000);
        cout << "Panic. You can't allow yourself to panic. Panic is a liability right now." <<endl;
        Sleep(1000);
        cout << "Finally, your heart settles down. Some of the ice in your veins melts." <<endl;
        Sleep (1000);
        cout << "As you walk, you spot what looks like a grocery store. You can't read the signage, but you can see rows of shelves through the cracked store windows. A single light flickers in one of the ailes"<< endl;
        Sleep(1000);
        cout << "What do you do now?" << endl;
        Sleep(1000);
        cout<< "Keep going?"<< endl;
        Sleep(1000);
        cout << "Check out the store."<<endl;
        string path6;
        cout<< "";
        if (path6 == "Check out the store")
            {
                cout << "You walk through into the store, feet crunching on broken glass.";
                
                
            }



        }
   
      string path5;
    cin >> path5;
    if (path1 =="back")
{
 cout << "Slowly, you turn around and walk towards the dark, foreboding forest.\n" <<endl;
 Sleep(1000);
 cout << "You don't know WHY you're going in there. This world is creepy enough as it is." <<endl;
  Sleep(1000);
 cout << "It's like there's a little voice in your head telling you to keep going; that there's something important in there"<<endl;
  Sleep(1000);
 cout << "Like an automaton, you stumble into the forest. Branches claw at your face. Wire-like brush tears at your clothes. Yet you keep going." <<endl;
  Sleep(1000);
 cout << "You keep walking. And walking. And walking. Your legs scream in agony. Muscles turn to iron bands. Buckets of sweat pour down your face. Yet you keep going." << endl;
  Sleep(1000);
 cout << " 'Just a little further. Just a little further.' You mutter to yourself."<<endl;
  Sleep(1000);
 cout << "Eventually, your body gives out. You fall flat on your face, energy reserves completely drained. Too tired to move, you lay there on the brush, twitching. You try to call out for help, but all you can manage is a weak moan."<< endl;
  Sleep(1000);
 cout << "Something crashes through the brush. You can hear it getting louder and louder as it gets closer...";
  Sleep(1000);
 cout << "THE END"<<endl;
 break;
}
   
   
   else
    {cout<< "Invalid Input";}
        }
    
 
    
    
    }








    







