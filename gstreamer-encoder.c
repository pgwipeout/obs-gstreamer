/*
 * obs-gstreamer. OBS Studio plugin.
 * Copyright (C) 2018-2019 Florian Zwoch <fzwoch@gmail.com>
 *
 * This file is part of obs-gstreamer.
 *
 * obs-gstreamer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * obs-gstreamer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with obs-gstreamer. If not, see <http://www.gnu.org/licenses/>.
 */

#include <obs/obs-module.h>
#include <gst/gst.h>
#include <gst/app/app.h>

typedef struct {
	GstElement* pipe;
    GstElement* appsrc;
    GstElement* appsink;
	obs_encoder_t* encoder;
	obs_data_t* settings;
} data_t;

const char* gstreamer_encoder_get_name(void* type_data)
{
	return "GStreamer Encoder";
}

void* gstreamer_encoder_create(obs_data_t* settings, obs_encoder_t* encoder)
{
    return NULL;
}

void gstreamer_encoder_destroy(void* data)
{
}

bool gstreamer_encoder_encode(void* data, struct encoder_frame* frame, struct encoder_packet* packet, bool* received_packet)
{
    return true;
}

void gstreamer_encoder_get_defaults(obs_data_t* settings)
{
}

obs_properties_t* gstreamer_encoder_get_properties(void* data)
{
    return NULL;
}

bool gstreamer_encoder_update(void* data, obs_data_t* settings)
{
    return true;
}