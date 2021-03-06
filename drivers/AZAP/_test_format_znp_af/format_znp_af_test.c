/*
 * Copyright (C) Actility, SA. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * Please contact Actility, SA.,  4, rue Ampere 22300 LANNION FRANCE
 * or visit www.actility.com if you need additional
 * information or have any questions.
 */

//************************************************************************
//************************************************************************
//**
//** File : ./_test_format_znp_af/format_znp_af_test.c
//**
//** Description  :
//**
//**
//** Date : 11/19/2012
//** Author :  Mathias Louiset, Actility (c), 2012.
//** Modified by :
//**
//** Task :
//**
//** REVISION HISTORY:
//**
//**  Date      Version   Name
//**  --------    -------   ------------
//**
//************************************************************************
//************************************************************************



#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <rtlbase.h>

#include "azap_types.h"
#include "azap_tools.h"
#include "uart_buf_control.h"
#include "azap_api.h"
#include "azap_api_common.h"
#include "azap_api_af.h"
#include "azap_api_zcl.h"
#include "uart_buf_control.h"
#include "azap_zcl_attr_val.h"
#include "azap_attribute.h"
#include "azap_endpoint.h"
#include "format_znp.h"
#include "format_znp_af.h"


int TraceLevel;
int TraceDebug;


/**
 * Tests for parseZCLReportCmd function
 */
void test_parseZCLReportCmd()
{
  printf("******************************************\n");
  printf("******** test_parseZCLReportCmd **********\n");

  // parse erroneous payload
  azap_byte array[] =
  {
    0x00, 0xe0, 0x21, 0x8a, 0x00, 0x01, 0xe0, 0x21,
    0xea, 0x00, 0x02, 0xe0, 0x21, 0x20, 0x00, 0x03,
    0xe0, 0x23, 0x42, 0xef, 0x01, 0x00
  };

  azap_byte *data = &array[0];
  azap_uint8 len = 22;
  azapZclReportCommand_t *parsedData = parseZCLReportCmd(len, data);
  assert(NULL != parsedData);
  assert(4 == parsedData->numAttr);

  printf("\ntest_parseZCLReportCmd OK\n\n");
}

/**
 * @brief The main entry point of the test program for format_znp_af function set.
 * It invokes every tests.
 * @param argc
 * @param argv
 * @return 0 if all tests complete successfully; the program is
 * aborted if a test fails (see tests)
 */
int main(int argc, char *argv[])
{

  test_parseZCLReportCmd();

  printf("\t ___\n");
  printf("\t/ __|_  _ __ __ ___ ______\n");
  printf("\t\\__ \\ || / _/ _/ -_|_-<_-<\n");
  printf("\t|___/\\_,_\\__\\__\\___/__/__/\n");
  printf("\t\n");

  return 0;
}


