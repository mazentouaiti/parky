/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "operation.h"
GtkBuilder *builder;
int
main (int argc, char *argv[])
{
  GtkWidget *user_interface;
  GtkWidget *delete_warning;
  GtkWidget *logout;
  GtkWidget *invoice;
  GtkWidget *confirm_edit;
  GtkWidget *addwindow;
  GtkWidget *login;
  GtkWidget *welcome;
  GtkWidget *AdminwindowLogin;
  GtkWidget *AdminwindowParkConfig;
  GtkWidget *AdminwindowMain;
  GtkWidget *AdminwindowNewAcc;
  


#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
   // Initialize the GTK builder
   builder = gtk_builder_new();  // Initialize the builder
   gtk_builder_add_from_file(builder, "projectc.glade", NULL);  

   // user_interface = GTK_WIDGET (gtk_builder_get_object (builder, "user_interface"));
	gtk_builder_connect_signals (builder,NULL);
  

  

  
  //user_interface = create_user_interface ();
  //gtk_widget_show (user_interface);
  
//delete_warning = create_delete_warning ();
  //gtk_widget_show (delete_warning);
  //logout = create_logout ();
  //gtk_widget_show (logout);
  //invoice = create_invoice ();
  //gtk_widget_show (invoice);
  welcome = create_welcome ();
  gtk_widget_show (welcome);
  //AdminwindowLogin = create_AdminwindowLogin ();
  //gtk_widget_show (AdminwindowLogin);	
  gtk_main ();
 g_object_unref (G_OBJECT (builder));
  return 0;
}

