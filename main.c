#include <stdlib.h>
#include "callback.h"
#include <gtk/gtk.h>
 

 test
int main(int argc, char **argv)
{
    GtkWidget *window;
    GtkWidget *pVBox;
    GtkWidget *pMenuBar;
    GtkWidget *pMenu;
    GtkWidget *pMenuItem;
	GtkWidget *grid;
	GtkWidget *label;
	GtkWidget *switcher;
 
    gtk_init(&argc, &argv);
 
   
	/* création de la fenetre  */
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position (GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_title (GTK_WINDOW (window), "Telecommande-Pcduino");
	gtk_container_set_border_width (GTK_CONTAINER (window), 10);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

 
    /* Création de la GtkVBox */
    pVBox = gtk_vbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(window), pVBox);

// ----------------------------------------------------------------------------------
 
    /**** Création du menu ****/
 
    /* ETAPE 1 */
    pMenuBar = gtk_menu_bar_new();
    /** Premier sous-menu **/
    /* ETAPE 2 */
    pMenu = gtk_menu_new();
    /* ETAPE 3 */
    pMenuItem = gtk_menu_item_new_with_label("Mode On/Off");
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
 
    pMenuItem = gtk_menu_item_new_with_label("Mode Impulsion");
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
 
    pMenuItem = gtk_menu_item_new_with_label("Modifier le nom des Gpio");
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
 
    pMenuItem = gtk_menu_item_new_with_label("Initialisation des Gpio en output");
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
 
    pMenuItem = gtk_menu_item_new_with_label("Quitter");
    g_signal_connect(G_OBJECT(pMenuItem), "activate", G_CALLBACK(OnQuitter),(GtkWidget*) window);
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
    /* ETAPE 4 */
    pMenuItem = gtk_menu_item_new_with_label("Configuration");
    /* ETAPE 5 */
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(pMenuItem), pMenu);
    /* ETAPE 6 */
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenuBar), pMenuItem);
 
    /** Second sous-menu **/
    /* ETAPE 2 */
    pMenu = gtk_menu_new();
    /* ETAPE 3 */
    pMenuItem = gtk_menu_item_new_with_label("Aide");
    g_signal_connect(G_OBJECT(pMenuItem), "activate", G_CALLBACK(Aide),(GtkWidget*) window);
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
	
    pMenuItem = gtk_menu_item_new_with_label("A propos de...");
    g_signal_connect(G_OBJECT(pMenuItem), "activate", G_CALLBACK(OnAbout),(GtkWidget*) window);
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenu), pMenuItem);
    /* ETAPE 4 */
    pMenuItem = gtk_menu_item_new_with_label("?");
    /* ETAPE 5 */
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(pMenuItem), pMenu);
    /* ETAPE 6 */
    gtk_menu_shell_append(GTK_MENU_SHELL(pMenuBar), pMenuItem);
 
    /* Ajout du menu a la fenetre */
    gtk_box_pack_start(GTK_BOX(pVBox), pMenuBar, FALSE, FALSE, 0);
	
 // ----------------------------------------------------------------------------------

 /* construction du conteneur type grid */
	grid = gtk_grid_new ();
	gtk_grid_set_row_homogeneous (GTK_GRID (grid), TRUE);
	gtk_grid_set_column_homogeneous (GTK_GRID (grid), TRUE);                 
	gtk_grid_set_column_spacing (GTK_GRID (grid), 10);
	gtk_grid_set_row_spacing (GTK_GRID (grid), 10);

	/* Placement du conteneur dans la fenetre */
	gtk_box_pack_start(GTK_BOX(pVBox), grid, FALSE, FALSE, 0);

// ---------------------------------------------------------------------
	/*Creer un label*/
	label = gtk_label_new ("Gpio 0");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 0, 1, 1);

	/*Creer un switch avec pour valeur de defaut desactive*/
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	
	/*placement du switch*/
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 0, 1, 1);
	
	/*Connecter le signal clique a la fonction de callback*/
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb0), window);

	// ---------------------------------------------------------------------------
	label = gtk_label_new ("Gpio 1");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 1, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 1, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb1), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 2");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 2, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 2, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb2), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 3");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 3, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 3, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb3), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 4");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 4, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 4, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb4), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 5");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 5, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 5, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb5), window);

	// ---------------------------------------------------------------------------
	
	label = gtk_label_new ("Gpio 6");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 6, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 6, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb6), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 7");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 7, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 7, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb7), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 8");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 8, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 8, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb8), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 9");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 9, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 9, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb9), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 10");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 10, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 10, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb10), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 11");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 11, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 11, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb11), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 12");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 12, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 12, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb12), window);

	// ---------------------------------------------------------------------------
	
	label = gtk_label_new ("Gpio 13");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 13, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 13, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb13), window);

	// ---------------------------------------------------------------------------


	
    gtk_widget_show_all(window);
 
    gtk_main();
 
    return EXIT_SUCCESS;
}
 
