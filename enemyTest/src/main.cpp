
#include "app.h"
#include "object/enemy.h" 

int main() {
  
	App::Get();

  while (App::Get().isOpen()) {

	  setEnemy();
	  
	  App::Get().begin();


	  testDraw();




	  App::Get().end();
  }
}
