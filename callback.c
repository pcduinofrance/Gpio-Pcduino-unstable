#include <stdlib.h>
#include <gtk/gtk.h>

// -----------------------------------------------------------------------
/*Fonction de callback pour le switch*/
// -----------------------------------------------------------------------


void activate_cb0 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{
		

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio0", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio0", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb1 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio1", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio1", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb2 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio2", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio2", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb3 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio3", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio3", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb4 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio4", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio4", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb5 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio5", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio5", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb6 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio6", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio6", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb7 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio7", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio7", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb8 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio8", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio8", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb9 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio9", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio9", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb10 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio10", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio10", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb11 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio11", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio11", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb12 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio12", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio12", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb13 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio13", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio13", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// ---------Fonctions du menu--------------------------------------------------------------


void OnQuitter(GtkWidget* widget, gpointer data)
{
    GtkWidget *pQuestion;
 
    pQuestion = gtk_message_dialog_new(GTK_WINDOW(data),
        GTK_DIALOG_MODAL,
        GTK_MESSAGE_QUESTION,
        GTK_BUTTONS_YES_NO,
        "Voulez vous vraiment\n"
        "quitter le programme?");
 
    switch(gtk_dialog_run(GTK_DIALOG(pQuestion)))
    {
        case GTK_RESPONSE_YES:
            gtk_main_quit();
            break;
        case GTK_RESPONSE_NONE:
        case GTK_RESPONSE_NO:
            gtk_widget_destroy(pQuestion);
            break;
    }
}
 
void OnAbout(GtkWidget* widget, gpointer data)
{
    GtkWidget *pAbout;
 
    pAbout = gtk_message_dialog_new(GTK_WINDOW(data),
        GTK_DIALOG_MODAL,
        GTK_MESSAGE_INFO,
        GTK_BUTTONS_OK,
        "Telecommande Gpio du Pcduino\n"
        "par Julien AMREIN");
 
    gtk_dialog_run(GTK_DIALOG(pAbout));
 
    gtk_widget_destroy(pAbout);
}

void Aide(GtkWidget* widget, gpointer data)
{
    GtkWidget *pAbout;
 
    pAbout = gtk_message_dialog_new(GTK_WINDOW(data),
        GTK_DIALOG_MODAL,
        GTK_MESSAGE_INFO,
        GTK_BUTTONS_OK,
        ">_Telecommande Gpio du Pcduino.\n"
        "Logiciel permettant de piloter les Gpio du pcduino\n"
        "grace a une interface graphique simplifiee.\n\n"
        "-Mode On/Off: Permet de piloter le signal comme un interrupteur de maison.\n\n"
        "-Mode Impulsion: Permet de seulement envoyer des impulsions pour eventuellement controller des telerupteurs via un relais\n\n"
        "-Modifier le nom des Gpio: Pour attribuer un nom plus explicite (Eclairage, ...)\n\n"
        "-Initialisation des Gpio en output: Permet de configurer le mode d'utilisation de vos Gpio en input - output un par un et sauvegarder cette configuration.\n");
 
    gtk_dialog_run(GTK_DIALOG(pAbout));
 
    gtk_widget_destroy(pAbout);
}
