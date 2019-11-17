#include <gtk/gtk.h>

int main( int argc, char *argv[]){
    GtkWidget *window, *layout, *image, *button, *label, *entry, *view; 
    GtkTextBuffer *buffer;
    
    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 1280, 899);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    layout = gtk_layout_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);

    view= gtk_text_view_new ();
    buffer= gtk_text_view_get_buffer (GTK_TEXT_VIEW (view));
    gtk_text_buffer_set_text (buffer, "Texto de prueba", -1);
    gtk_layout_put(GTK_LAYOUT(layout), view, 750, 650);
    gtk_widget_set_size_request(view, 200, 35);

    image = gtk_image_new_from_file("../int_what_words.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);

    button = gtk_button_new_with_label("Comparar letra");
    gtk_layout_put(GTK_LAYOUT(layout), button, 850, 650);
    gtk_widget_set_size_request(button, 80, 35);


    g_signal_connect_swapped(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}




