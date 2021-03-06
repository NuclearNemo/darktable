/*
    This file is part of darktable,
    copyright (c) 2009--2012 christian tellefsen

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>
#include <glib/gstdio.h>

typedef struct completion_spec
{
  gchar *varname;
  gchar *description;
} dt_gtkentry_completion_spec;

typedef enum
{
  COMPL_VARNAME = 0,
  COMPL_DESCRIPTION
} dtGtkEntryCompletionSpecCol;

void dt_gtkentry_setup_completion(GtkEntry *entry, const dt_gtkentry_completion_spec *compl_list);

const dt_gtkentry_completion_spec *dt_gtkentry_get_default_path_compl_list();

gchar *dt_gtkentry_build_completion_tooltip_text(const gchar *header,
                                                 const dt_gtkentry_completion_spec *compl_list);
