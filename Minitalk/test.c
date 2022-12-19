#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sigint_handler(int signum)
{
	signum = 0;
  printf("Received SIGINT, exiting...\n");
  exit(0);
}

int main() {
  // Capture le signal SIGINT et définit la fonction sigint_handler comme gestionnaire de signal
  signal(SIGINT, sigint_handler);

  // Boucle infinie
  while (1) {
    // Fait quelque chose d'utile ici
  }

  return 0;
}
