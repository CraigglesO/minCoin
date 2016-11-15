#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define INF (int)1e9

int main()
{
    int i,j,t,m,s,v;
    vector < vector<short> > lookup = {{0,0},{1,0,0,1},{2,0,0,2},{3,0,0,3},{4,0,0,4},{5,0,4,3,3,4,0,5},{6,0,0,6},{7,0,0,7},{8,0,0,8},{9,0,0,9},{10,0,8,6,6,8,0,10},{11,0,0,11},{12,0,0,12},{13,0,12,5,5,12,0,13},{14,0,0,14},{15,0,12,9,9,12,0,15},{16,0,0,16},{17,0,15,8,8,15,0,17},{18,0,0,18},{19,0,0,19},{20,0,16,12,12,16,0,20},{21,0,0,21},{22,0,0,22},{23,0,0,23},{24,0,0,24},{25,0,24,7,20,15,15,20,7,24,0,25},{26,0,24,10,10,24,0,26},{27,0,0,27},{28,0,0,28},{29,0,21,20,20,21,0,29},{30,0,24,18,18,24,0,30},{31,0,0,31},{32,0,0,32},{33,0,0,33},{34,0,30,16,16,30,0,34},{35,0,28,21,21,28,0,35},{36,0,0,36},{37,0,35,12,12,35,0,37},{38,0,0,38},{39,0,36,15,15,36,0,39},{40,0,32,24,24,32,0,40},{41,0,40,9,9,40,0,41},{42,0,0,42},{43,0,0,43},{44,0,0,44},{45,0,36,27,27,36,0,45},{46,0,0,46},{47,0,0,47},{48,0,0,48},{49,0,0,49},{50,0,48,14,40,30,30,40,14,48,0,50},{51,0,45,24,24,45,0,51},{52,0,48,20,20,48,0,52},{53,0,45,28,28,45,0,53},{54,0,0,54},{55,0,44,33,33,44,0,55},{56,0,0,56},{57,0,0,57},{58,0,42,40,40,42,0,58},{59,0,0,59},{60,0,48,36,36,48,0,60},{61,0,60,11,11,60,0,61},{62,0,0,62},{63,0,0,63},{64,0,0,64},{65,0,63,16,60,25,56,33,52,39,39,52,33,56,25,60,16,63,0,65},{66,0,0,66},{67,0,0,67},{68,0,60,32,32,60,0,68},{69,0,0,69},{70,0,56,42,42,56,0,70},{71,0,0,71},{72,0,0,72},{73,0,55,48,48,55,0,73},{74,0,70,24,24,70,0,74},{75,0,72,21,60,45,45,60,21,72,0,75},{76,0,0,76},{77,0,0,77},{78,0,72,30,30,72,0,78},{79,0,0,79},{80,0,64,48,48,64,0,80},{81,0,0,81},{82,0,80,18,18,80,0,82},{83,0,0,83},{84,0,0,84},{85,0,84,13,77,36,75,40,68,51,51,68,40,75,36,77,13,84,0,85},{86,0,0,86},{87,0,63,60,60,63,0,87},{88,0,0,88},{89,0,80,39,39,80,0,89},{90,0,72,54,54,72,0,90},{91,0,84,35,35,84,0,91},{92,0,0,92},{93,0,0,93},{94,0,0,94},{95,0,76,57,57,76,0,95},{96,0,0,96},{97,0,72,65,65,72,0,97},{98,0,0,98},{99,0,0,99},{100,0,96,28,80,60,60,80,28,96,0,100},{101,0,99,20,20,99,0,101},{102,0,90,48,48,90,0,102},{103,0,0,103},{104,0,96,40,40,96,0,104},{105,0,84,63,63,84,0,105},{106,0,90,56,56,90,0,106},{107,0,0,107},{108,0,0,108},{109,0,91,60,60,91,0,109},{110,0,88,66,66,88,0,110},{111,0,105,36,36,105,0,111},{112,0,0,112},{113,0,112,15,15,112,0,113},{114,0,0,114},{115,0,92,69,69,92,0,115},{116,0,84,80,80,84,0,116},{117,0,108,45,45,108,0,117},{118,0,0,118},{119,0,105,56,56,105,0,119},{120,0,96,72,72,96,0,120},{121,0,0,121},{122,0,120,22,22,120,0,122},{123,0,120,27,27,120,0,123},{124,0,0,124},{125,0,120,35,117,44,100,75,75,100,44,117,35,120,0,125},{126,0,0,126},{127,0,0,127},{128,0,0,128},{129,0,0,129},{130,0,126,32,120,50,112,66,104,78,78,104,66,112,50,120,32,126,0,130},{131,0,0,131},{132,0,0,132},{133,0,0,133},{134,0,0,134},{135,0,108,81,81,108,0,135},{136,0,120,64,64,120,0,136},{137,0,105,88,88,105,0,137},{138,0,0,138},{139,0,0,139},{140,0,112,84,84,112,0,140},{141,0,0,141},{142,0,0,142},{143,0,132,55,55,132,0,143},{144,0,0,144},{145,0,144,17,143,24,116,87,105,100,100,105,87,116,24,143,17,144,0,145},{146,0,110,96,96,110,0,146},{147,0,0,147},{148,0,140,48,48,140,0,148},{149,0,140,51,51,140,0,149},{150,0,144,42,120,90,90,120,42,144,0,150},{151,0,0,151},{152,0,0,152},{153,0,135,72,72,135,0,153},{154,0,0,154},{155,0,124,93,93,124,0,155},{156,0,144,60,60,144,0,156},{157,0,132,85,85,132,0,157},{158,0,0,158},{159,0,135,84,84,135,0,159},{160,0,128,96,96,128,0,160},{161,0,0,161},{162,0,0,162},{163,0,0,163},{164,0,160,36,36,160,0,164},{165,0,132,99,99,132,0,165},{166,0,0,166},{167,0,0,167},{168,0,0,168},{169,0,156,65,120,119,119,120,65,156,0,169},{170,0,168,26,154,72,150,80,136,102,102,136,80,150,72,154,26,168,0,170},{171,0,0,171},{172,0,0,172},{173,0,165,52,52,165,0,173},{174,0,126,120,120,126,0,174},{175,0,168,49,140,105,105,140,49,168,0,175},{176,0,0,176},{177,0,0,177},{178,0,160,78,78,160,0,178},{179,0,0,179},{180,0,144,108,108,144,0,180},{181,0,180,19,19,180,0,181},{182,0,168,70,70,168,0,182},{183,0,180,33,33,180,0,183},{184,0,0,184},{185,0,176,57,175,60,153,104,148,111,111,148,104,153,60,175,57,176,0,185},{186,0,0,186},{187,0,165,88,88,165,0,187},{188,0,0,188},{189,0,0,189},{190,0,152,114,114,152,0,190},{191,0,0,191},{192,0,0,192},{193,0,168,95,95,168,0,193},{194,0,144,130,130,144,0,194},{195,0,189,48,180,75,168,99,156,117,117,156,99,168,75,180,48,189,0,195},{196,0,0,196},{197,0,195,28,28,195,0,197},{198,0,0,198},{199,0,0,199},{200,0,192,56,160,120,120,160,56,192,0,200},{201,0,0,201},{202,0,198,40,40,198,0,202},{203,0,147,140,140,147,0,203},{204,0,180,96,96,180,0,204},{205,0,200,45,187,84,164,123,156,133,133,156,123,164,84,187,45,200,0,205},{206,0,0,206},{207,0,0,207},{208,0,192,80,80,192,0,208},{209,0,0,209},{210,0,168,126,126,168,0,210},{211,0,0,211},{212,0,180,112,112,180,0,212},{213,0,0,213},{214,0,0,214},{215,0,172,129,129,172,0,215},{216,0,0,216},{217,0,0,217},{218,0,182,120,120,182,0,218},{219,0,165,144,144,165,0,219},{220,0,176,132,132,176,0,220},{221,0,220,21,204,85,195,104,171,140,140,171,104,195,85,204,21,220,0,221},{222,0,210,72,72,210,0,222},{223,0,0,223},{224,0,0,224},{225,0,216,63,180,135,135,180,63,216,0,225},{226,0,224,30,30,224,0,226},{227,0,0,227},{228,0,0,228},{229,0,221,60,60,221,0,229},{230,0,184,138,138,184,0,230},{231,0,0,231},{232,0,168,160,160,168,0,232},{233,0,208,105,105,208,0,233},{234,0,216,90,90,216,0,234},{235,0,188,141,141,188,0,235},{236,0,0,236},{237,0,0,237},{238,0,210,112,112,210,0,238},{239,0,0,239},{240,0,192,144,144,192,0,240},{241,0,209,120,120,209,0,241},{242,0,0,242},{243,0,0,243},{244,0,240,44,44,240,0,244},{245,0,196,147,147,196,0,245},{246,0,240,54,54,240,0,246},{247,0,228,95,95,228,0,247},{248,0,0,248},{249,0,0,249},{250,0,240,70,234,88,200,150,150,200,88,234,70,240,0,250},{251,0,0,251},{252,0,0,252},{253,0,0,253},{254,0,0,254},{255,0,252,39,231,108,225,120,204,153,153,204,120,225,108,231,39,252,0,255},{256,0,0,256},{257,0,255,32,32,255,0,257},{258,0,0,258},{259,0,245,84,84,245,0,259},{260,0,252,64,240,100,224,132,208,156,156,208,132,224,100,240,64,252,0,260},{261,0,189,180,180,189,0,261},{262,0,0,262},{263,0,0,263},{264,0,0,264},{265,0,264,23,247,96,225,140,212,159,159,212,140,225,96,247,23,264,0,265},{266,0,0,266},{267,0,240,117,117,240,0,267},{268,0,0,268},{269,0,260,69,69,260,0,269},{270,0,216,162,162,216,0,270},{271,0,0,271},{272,0,240,128,128,240,0,272},{273,0,252,105,105,252,0,273},{274,0,210,176,176,210,0,274},{275,0,264,77,220,165,165,220,77,264,0,275},{276,0,0,276},{277,0,252,115,115,252,0,277},{278,0,0,278},{279,0,0,279},{280,0,224,168,168,224,0,280},{281,0,231,160,160,231,0,281},{282,0,0,282},{283,0,0,283},{284,0,0,284},{285,0,228,171,171,228,0,285},{286,0,264,110,110,264,0,286},{287,0,280,63,63,280,0,287},{288,0,0,288},{289,0,255,136,240,161,161,240,136,255,0,289},{290,0,288,34,286,48,232,174,210,200,200,210,174,232,48,286,34,288,0,290},{291,0,216,195,195,216,0,291},{292,0,220,192,192,220,0,292},{293,0,285,68,68,285,0,293},{294,0,0,294},{295,0,236,177,177,236,0,295},{296,0,280,96,96,280,0,296},{297,0,0,297},{298,0,280,102,102,280,0,298},{299,0,276,115,115,276,0,299},{300,0,288,84,240,180,180,240,84,288,0,300}};

    cin >> t;
    while (t--){
      cin >> m >> s;
      //sl = lookup[s].length;
      int coins [m][2];
      v = s+1;
      int cMap [v][v];
      for (int j = 0; j <= s; j++)
        for (int i = 0; i <= s; i++)
          cMap[j][i] = INF;

      cMap[0][0] = 0;
      vector<short> sv = lookup[s];
      for (i = 0; i < m; i++){
        cin >> coins[i][0] >> coins[i][1];
      }



      // Compute minimum coins required for all
      // values from 1 to V
      for (int j = 0; j < v; j++){
        for (int i = 0; i < v; i++){

          for (int k = 0; k < m; k++){
            if (coins[k][0] <= j && coins[k][1] <= i) {
              int sub_res = cMap[j - coins[k][0]][i - coins[k][1]];
              if (sub_res != INF && sub_res + 1 < cMap[j][i])
                cMap[j][i] = sub_res + 1;
            }
          }

        }
      }


      int solution = INF;
      for (i = 0; i < sv.size(); i += 2){
        if (cMap[sv[i]][sv[i+1]] < solution){
          solution = cMap[sv[i]][sv[i+1]];
        }
      }




      if (solution == INF)
        cout << "not possible" << endl;
      else
        cout << solution << endl;

    }



    return 0;
}