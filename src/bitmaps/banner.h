#ifndef BANNER_H
#define BANNER_H

const uint8_t bannerFrameCount = 1;
const uint8_t bannerFrameWidth = 128;
const uint8_t bannerFrameHeight = 64;
const uint8_t PROGMEM bannerFrames[][1024] = {
  /* Frame number 0
       ############################################################################################################################## 
      ##                                                                                                                            ##
      #  ##########################################################################################################################  #
      # ##                                                                                                                        ## #
      # #  # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   # #
      # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  # #
      # #  # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
      # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  # #
      # #  # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
      # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  # #
      # #  #     # # # # # # #       # # # # # # # # # # # # # # # # # # # # # # # # # # #       # # # # # # # # # # # # # # # # # # #
      # # #   #                 # #                     # #                     #          # ##                         # # # # #  # #
      # #    ##########    ######### #################     # #################   # ##########  ######################    # # # # # # #
      # # # # ########   ########## #####################    ###################   ########## ##########################    # # #  # #
      # #   ###########  ########## #######################  #####################  ######### ############################   # # # # #
      # #  ############   ######### ######################## ####################### ######## #############################   # #  # #
      # #  ############   ######### ######################### ####################### ####### ##############################   # # # #
      # #   ########### ########### ########################## ####################### ###### ###############################   #  # #
      # #   ###########  ########## ########################## ####################### ###### ###############################  # # # #
      # #   ####################### ########################### ####################### ##### ################################  #  # #
      # #   ####################### ########## #  ############# ######################## #### ################################ # # # #
      # #   ####################### ########## #    ########### #######  ############### #### ###########     #   ############  #  # #
      # #   ####################### ##########      ########### ####### #    ########### #### ###########         ############ # # # #
      # #   ####################### ########        ########### ##### #       ########### ### ###########          ###########  #  # #
      # #   ####################### #########       ########### ######         ########## ### ###########           ########## # # # #
      # #   ####################### ######### #   ############# #####          ########## ### ###########        #############  #  # #
      # #   ########## #  ######### ########### ############### #######        ########## ### ################ ############### # # # #
      # #   ############   ######## ########################### ######          ######### ### ################################  #  # #
      # #   ##########   # ######## ####### ################### #######        ########## ##  ################################ # # # #
      # #   ##  # ####    ######### # ####### ###  # #   ##### # ## ##         ### #  ### ##   ######### #####  # ####### ###   #  # #
      # #   ###       #    ##    ## ###      ### ##     #   # ### # ##         ##  # #  # # #  ###     # #    #   ### # #  #   # # # #
      # #   #        #   # #      # #                       # ##      #       #         # #  # #  ####                     #  # #  # #
      # #   #         #   #       # #                      # #       #   #  ##         # #   #  #     #                   #  # # # # #
      # #   #        #    #       # #                       # #       ### ##           # #   #  ###### #  ##               #  # #  # #
      # #   #        #    #       # #        ##              # #                       # #    ##     # # #  # #             #  # # # #
      # #    #       #    #       # #       #  #              # #                     # #            # #  #  # #             #  #  # #
      # #   #        #    #       # #        #  ###           # #                    # #             # # #      #            #   # # #
      # #   #        #    #       # #       ##     #           # #                   # #             # ##        #            #    # #
      # #    #      #    ##       # #      #       #            # #                 # #              # ##         #            #   # #
      # #  ## #      #   # #       # #      #       #            # #              ## #               # ##          #            #  # #
      # #   ##      # #   #       # #       #        #          # #              #  #                # ##           #          #   # #
      # #  # #       #    #       #  #       #        #        # #            ###  #                 # ##            #        #    # #
      # #  # ######## #    ##### #  # #######          ######## ##############     ################### ##             #      #     # #
      # #                       #  #  #                                                                                #    #      # #
      # #                                        ###########################################                           #   #       # #
      # #   #   #   #   #   #   #   #   #   #   ####################### ## ############### ##   #   #   #   #   #   #   # #     #  # #
      # #  ## # ## ## # ## ## # ## ## # ## ##   ### ################### ## ############### ##   ## ## # ## ## # ## ## #  #    # #  # #
      # #     #       #       #       #         ### ##################  ## ############### ##         #       #       #       #    # #
      # #  # ### ### ### ### ### ### ### ### #  ##   ### # # ##    ## # ## ### ##    ##    ##  # ### ### ### ### ### ### ### ###   # #
      # #     #       #       #       #         ### #### # # # ### # ## ## ### # ### # ### ##         #       #       #       #    # #
      # #  ## # ## ## # ## ## # ## ## # ## ##   ### #### # # # #   #     #    ## #   # ### ##   ## ## # ## ## # ## ## # ## ## # #  # #
      # #   #   #   #   #   #   #   #   #   #   ### ## # # # #  ####### ## ## ##  #### ### ##   #   #   #   #   #   #   #   #   #  # #
      # #     #       #       #       #         ####  ### # ###    #### ## ### ##    ##    ##         #       #       #       #    # #
      # #   #   #   #   #   #   #   #   #   #    ###########################################    #   #   #   #   #   #   #   #   #  # #
      # #  ## # ## ## # ## ## # ## ## # ## ## #                                               # ## ## # ## ## # ## ## # ## ## # #  # #
      # #     #       #       #       #       #                                               #       #       #       #       #    # #
      # #  # ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###   # #
      # #     #       #       #       #       #       #       #       #       #       #       #       #       #       #       #    # #
      # #  ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # ## ## # #  # #
      # #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # #
      # ##                                                                                                                        ## #
      #  ##########################################################################################################################  #
      ##                                                                                                                            ##
       ############################################################################################################################## 
  */
  {0xfe,0x03,0xf9,0x0d,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x55,0xa5,0x45,0x0d,0xf9,0x03,0xfe,0xff,0x00,0xff,0x00,0x2a,0x85,0xe2,0xd1,0xfa,0xf1,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xd2,0x05,0x02,0x65,0xe2,0xf5,0xf2,0xf5,0xf2,0xf1,0xfa,0xf1,0xfa,0x11,0xe2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xe2,0xe5,0xea,0xc5,0xca,0x95,0x02,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xe2,0xe5,0xca,0xd5,0x82,0xb5,0x72,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf9,0xf2,0x09,0xea,0xf1,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xf5,0xf2,0xe5,0xe2,0xe5,0xca,0xd5,0x8a,0x15,0x2a,0x55,0xaa,0x55,0xaa,0x55,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xfa,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x7f,0x0f,0x3f,0x0f,0x0f,0x1f,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xf9,0x07,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0x1f,0x5f,0x3f,0x3f,0x3f,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xf9,0xf7,0x8f,0x7f,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0x1f,0x1f,0x1f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xf8,0x00,0x55,0xaa,0x55,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0xff,0x7f,0x5f,0x1f,0x3f,0x1f,0x3f,0x3f,0x3f,0xbf,0x4b,0x0f,0x03,0x93,0x27,0xff,0x7f,0x3f,0x3f,0x3f,0x3f,0x7f,0xff,0x00,0xff,0x5f,0x7f,0x3f,0x3f,0x3f,0x3f,0x2f,0x3f,0x5c,0x7e,0x78,0x3c,0x5c,0x5e,0x3e,0x1f,0x3f,0x1f,0x1f,0x5f,0x3f,0x3f,0x3f,0xff,0x3f,0xdf,0xe0,0x5f,0x3f,0x7f,0x1f,0x7f,0x7d,0x94,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x77,0x7f,0x3f,0x1f,0x7f,0x1f,0x5f,0x3f,0x3f,0xff,0x00,0xff,0x3f,0x4f,0x80,0x1f,0xff,0x7f,0x7f,0xbf,0xbf,0xbf,0xbf,0x3f,0x7f,0x1f,0x7c,0x3c,0x3c,0x3c,0x3c,0x58,0x1c,0x3c,0x1e,0x7e,0x7e,0x7f,0x3f,0x7f,0x3f,0x7f,0x1f,0x3f,0xff,0x3f,0x1f,0x80,0x55,0xaa,0x55,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x80,0xb7,0x48,0x80,0x00,0x00,0x00,0x00,0x00,0x40,0xbe,0x01,0x00,0x00,0xc0,0x7f,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x80,0x7f,0x80,0x00,0x00,0x00,0x00,0x00,0x40,0xa8,0x34,0x04,0x08,0x10,0x10,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x05,0x1a,0x24,0x58,0xa0,0x40,0x80,0x00,0x01,0x02,0x02,0x02,0x01,0x02,0x02,0x01,0x01,0x00,0x00,0x00,0x00,0x80,0x80,0x40,0xb0,0x48,0x37,0x08,0x07,0x00,0x00,0x00,0x03,0x04,0x04,0x03,0x02,0x02,0x02,0x02,0xfe,0x01,0xfe,0xe0,0x14,0x0a,0x02,0x04,0x08,0x04,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x04,0x19,0x22,0x45,0x8a,0x15,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x46,0x61,0x07,0xc4,0x04,0x64,0x44,0x04,0x44,0x65,0x02,0xc5,0x00,0x60,0x40,0x03,0x44,0x64,0x04,0xc4,0x04,0x68,0x44,0x03,0x48,0x65,0x02,0xcc,0x04,0x64,0x44,0x04,0x44,0x65,0x02,0x00,0x00,0xe0,0xf0,0xf0,0x30,0xf0,0xf1,0xf2,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf2,0xf5,0xf6,0xf5,0xf4,0xf4,0xf4,0x74,0x14,0xf4,0xf4,0x14,0xf4,0xf4,0xf4,0xf2,0xf2,0xf2,0xf1,0xf0,0xf6,0xf5,0xf4,0xf4,0xf4,0xf4,0xf4,0x14,0xf4,0xe4,0x04,0x04,0x04,0x64,0x44,0x04,0x44,0x64,0x07,0xc0,0x07,0x67,0x40,0x00,0x40,0x60,0x00,0xc0,0x00,0x60,0x40,0x00,0x40,0x61,0x02,0xc4,0x18,0x20,0x40,0x20,0x10,0x08,0x04,0xc2,0x01,0x60,0x00,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xc0,0x00,0x1f,0x3f,0x3e,0x30,0x2e,0x2f,0x37,0x3f,0x30,0x2f,0x30,0x2f,0x30,0x3f,0x31,0x26,0x2a,0x2a,0x28,0x3f,0x39,0x3a,0x3b,0x20,0x3b,0x3f,0x20,0x3b,0x3b,0x33,0x2c,0x3f,0x31,0x26,0x2a,0x2a,0x28,0x3f,0x31,0x2e,0x2e,0x2e,0x20,0x3f,0x1f,0x00,0xc0,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x45,0x01,0x45,0x6c,0x01,0xd7,0x01,0x6c,0x00,0x00,0xff,0x00,0xff,0x7f,0xc0,0x9f,0xb0,0xa0,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa5,0xa1,0xa5,0xac,0xa1,0xa7,0xa1,0xac,0xa0,0xb0,0x9f,0xc0,0x7f}
};

#endif
