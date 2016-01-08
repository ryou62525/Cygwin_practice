
#include "app.h"
 
int main() {
  
	App::Get();

  while (App::Get().isOpen()) {
	  App::Get().begin();







	  App::Get().end();
  }
}
