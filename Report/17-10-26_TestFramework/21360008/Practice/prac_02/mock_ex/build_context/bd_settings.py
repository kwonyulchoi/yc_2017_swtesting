# -*- coding: utf-8 -*- 
import shutil
import copy
import subprocess
import os

def Get_Module_ID():
    return [ 'mock_ex','prac_02']

def Get_Module_Name() :
    Module_ID=Get_Module_ID()
    module_name = Module_ID[0]
    return module_name

    ##
    # @brief Get dependency info, for each dependency module 
    #         has the configuration connection info. Without 
    #         configuration info, the default connection is 
    #         connected to same configurations
    #
    # @return info of the dependency info
def Get_dependency_module_info(): 
    return [

           ]


def Get_common_bd_env(): 
    return  [
                ['inc_path', ['inc','libsrc','src'] ], 
                ['lib_path', ['lib'] ],            
                ['lib'     , ['pthread' ] ], 
                ['lib_src' , ['libsrc/*.cpp'] ], 
                ['cppflags', [ '-g'] ],
                ['cflags'  , [ ] ],
                ['ccflags' , [ ] ],
            ]                  
 
# Total Build Environment
def Get_specific_bd_env():   
  return [
            ['x64_Linux_ubuntu',
               [
                  ['inc_path',[ '../../cpputest/include/'] ],
                  ['lib_path',['out/x64_Linux_ubuntu/lib',
                        '../../cpputest/lib/' ] ],
                  ['lib'     ,[ 'CppUTest','CppUTestExt'] ],
                  ['lib_src' ,[ ] ],
                  ['src'     ,['src/main.cpp'] ],
                  ['lib_type' ,'Shared' ],
                  ['swit_src' ,['testframework/swit/*.cpp'] ], 
                  ['swut_src' ,['testframework/swut/*.cpp'] ], 
                  ['test_lib' ,['CppUTest','CppUTestExt'] ], 
                  ['test_inc_path' ,['../../cpputest/include/'] ], 
                  ['test_lib_path' ,['../../cpputest/lib/'] ], 
                  ['direct_linking','False'], 
                  # --> if you want to use the libsrc codes in src code level
                  #     use this option , default ; 'False'
               ],
            ],
            ['x64_Windows',
               [
                  [ 'inc_path',[ ] ],
                  [ 'lib_path',['out/x64_Windows/lib' ] ],
                  [ 'lib'     ,[ ] ],
                  [ 'lib_src' ,[ ] ],
                  [ 'src'     ,['src/main.cpp'] ],
                  [ 'lib_type' ,'Shared' ],
               ],
            ],
        ]

    ##
    # @brief common config independent from configs (platforms,OS ...)
    #
    # @return common config value
def Get_output_common(): 
    return  [
                [ 'inc_path',['inc'] ],
                [ 'lib',['mock_ex'] ],
                [ 'bin_file',[
                    [ 'res/*.*','res'],
                    ] 
                  ],

            ]

    ##
    # @brief Get output list 
    #
    # @return Get output list of the module
def Get_output_specific():
  return [
      ['x64_Linux_ubuntu',
        [
            [ 'inc_path',['inc/x64_Linux_ubuntu'] ],
            [ 'bin_file',[
                ['out/x64_Linux_ubuntu/lib/libmock_ex.so','lib'],
                ]
              ],
            [ 'lib_path',['out/x64_Linux_ubuntu/lib'] ],
        ]
      ],
      ['x64_Windows', 
        [
            [ 'inc_path',['inc/x64_Windows'] ],
            [ 'bin_file',[
                  ['out/x64_Windows/lib/mock_ex.dll','lib'],
                ] 
              ],
            [ 'lib_path',['out/x64_Windows/lib'] ],
        ]
      ]
    ]

def Get_output_dirs():
    return [
        'res',
        'lib',
        'bin',
        'doc',
        ]

def Get_Bd_Environment():
    global g_Bd_Environment 
    return g_Bd_Environment
 
def Set_Bd_Environment(val):
    global g_Bd_Environment 
    g_Bd_Environment = copy.deepcopy(val)

def Do_pre_build(target_config):
    print("Do pre build job")

def Do_post_build(target_config):
    print("Do post build job")
    #remote_share_dir ="~/01_share/00_web_share"
    #outputdir = 'out/'+target_config+'/'
    #cmd="cp -r "+outputdir+"*"+" "+remote_share_dir
    #print("$ "+cmd)  
    #output=subprocess.call (cmd, shell=True)
    #print("Binary upload done")
