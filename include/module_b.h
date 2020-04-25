/*------------------------------------------------------------------------------


  File Name: module_b.h

------------------------------------------------------------------------------*/
/** \file module_b.h 
 *   \brief A Documented file.
 *   \addtogroup Module_B_API
 *   @{
*/

#ifndef MODULE_B_H
#define MODULE_B_H

/**
 * \fn int  module_b_usb_interface_init (unsigned int vid, unsigned int pid)
 * \brief This function initializes the USB interface to communicate with SOC
 *
 * \param vid    unsigned int representing Vendor ID for communicate using USB interface
 * \param pid    unsigned int representing Product ID for communicate using USB interface
 * \return status integer representing the status of the function.
 *               = 0 if successful
 *               < 0 if error
 */
int32_t  module_b_usb_interface_init (uint32_t vid, uint32_t pid);

#endif /* MODULE_B_H */
/*@}*/