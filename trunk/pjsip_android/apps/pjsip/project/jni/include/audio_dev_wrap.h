/*
 * audio_dev_wrap.h
 *
 *  Created on: 19 févr. 2011
 *      Author: r3gis3r
 */

#ifndef AUDIO_DEV_WRAP_H_
#define AUDIO_DEV_WRAP_H_

#include <pj/os.h>

PJ_BEGIN_DECL

//Should not be done there.
PJ_DECL(void) on_setup_audio_wrapper();
PJ_DECL(void) on_teardown_audio_wrapper();

PJ_END_DECL

#endif /* AUDIO_DEV_WRAP_H_ */
