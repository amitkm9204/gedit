/*
 * gedit-encodings-dialog.h
 * This file is part of gedit
 *
 * Copyright (C) 2003-2005 Paolo Maggi
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GEDIT_ENCODINGS_DIALOG_H
#define GEDIT_ENCODINGS_DIALOG_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GEDIT_TYPE_ENCODINGS_DIALOG (gedit_encodings_dialog_get_type())

G_DECLARE_FINAL_TYPE (GeditEncodingsDialog, gedit_encodings_dialog, GEDIT, ENCODINGS_DIALOG, GtkDialog)

GtkWidget	*gedit_encodings_dialog_new		(void);

G_END_DECLS

#endif /* GEDIT_ENCODINGS_DIALOG_H */
/* ex:set ts=8 noet: */
