#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

typedef struct{
char id[20];
char name[50];
char surname[50];
char email[50];
char password[50];	
}citizenprofile;


void on_btn_add_profile_clicked(GtkButton *button, gpointer user_data) {
    GtkWidget *entry_id = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_id"));
    GtkWidget *entry_name = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_name"));
    GtkWidget *entry_surname = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_surname"));
    GtkWidget *entry_email = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_email"));
    GtkWidget *entry_password = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_password"));

    citizenprofile profile;
    strcpy(profile.id, gtk_entry_get_text(GTK_ENTRY(entry_id)));
    strcpy(profile.name, gtk_entry_get_text(GTK_ENTRY(entry_name)));
    strcpy(profile.surname, gtk_entry_get_text(GTK_ENTRY(entry_surname)));
    strcpy(profile.email, gtk_entry_get_text(GTK_ENTRY(entry_email)));
    strcpy(profile.password, gtk_entry_get_text(GTK_ENTRY(entry_password)));

    g_print("Profile added: ID: %s, Name: %s\n", profile.id, profile.name);
}



void
on_btn_edit_profile_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *entry_id = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_id"));
    GtkWidget *entry_name = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_name"));
    GtkWidget *entry_surname = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_surname"));
    GtkWidget *entry_email = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_email"));
    GtkWidget *entry_password = GTK_WIDGET(gtk_builder_get_object(GTK_BUILDER(user_data), "entry_citizen_password"));

    citizenprofile profile;
    strcpy(profile.id, gtk_entry_get_text(GTK_ENTRY(entry_id)));
    strcpy(profile.name, gtk_entry_get_text(GTK_ENTRY(entry_name)));
    strcpy(profile.surname, gtk_entry_get_text(GTK_ENTRY(entry_surname)));
    strcpy(profile.email, gtk_entry_get_text(GTK_ENTRY(entry_email)));
    strcpy(profile.password, gtk_entry_get_text(GTK_ENTRY(entry_password)));
g_print("Profile edited\n");
}


void
on_btn_delete_profile_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_btn_display_profile_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_btn_calculate_invoice_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_btn_delete_pdp_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_btn_edit_pdp_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_submit_btn_add_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_cancel_btn_add_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_apply_btn_edit_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_cancel_btn_edit_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_delete_profile_btn_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_update_btn_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_togglebutton1_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_togglebutton2_toggled               (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button12_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button11_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button13_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_btn_print_fact_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_helpbutton1_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_cancelbutton1_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_okbutton1_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_cancelbutton2_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_okbutton2_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}

                                                                                                                                                                                                                                                                                                  