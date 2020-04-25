/*------------------------------------------------------------------------------


  File Name: module_a.h

------------------------------------------------------------------------------*/
/** \file module_a.h 
 *   \brief A Documented file.
 *   \addtogroup Module_A_API
 *   @{
*/

#ifndef MODULE_A_H
#define MODULE_A_H

/**
 * \fn int  module_a_usb_interface_init (unsigned int vid, unsigned int pid)
 * \brief This function initializes the USB interface to communicate with SOC
 *
 * \param vid    unsigned int representing Vendor ID for communicate using USB interface
 * \param pid    unsigned int representing Product ID for communicate using USB interface
 * \return status integer representing the status of the function.
 *               = 0 if successful
 *               < 0 if error
 */
int32_t  module_a_usb_interface_init (uint32_t vid, uint32_t pid);

#endif /* MODULE_A_H */
/*@}*/