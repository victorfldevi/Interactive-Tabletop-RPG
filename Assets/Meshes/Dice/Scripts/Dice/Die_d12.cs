using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Die_d12 : Die
{
    override protected Vector3 HitVector(int side)
    {
        switch (side)
        {
            case 1: return new Vector3(-0.3F, 0.4F, 0.9F);
            case 2: return new Vector3(1F, -0.4F, 0F);
            case 3: return new Vector3(0F, 1F, 0F);
            case 4: return new Vector3(-0.7F, -0.4F, -0.6F);
            case 5: return new Vector3(0.3F, -0.4F, 1F);
            case 6: return new Vector3(0.8F, 0.4F, -0.6F);
            case 7: return new Vector3(-0.8F, -0.4F, 0.6F);
            case 8: return new Vector3(-0.3F, 0.4F, -1F);
            case 9: return new Vector3(0.7F, 0.4F, 0.6F);
            case 10: return new Vector3(0F, -1F, 0F);
            case 11: return new Vector3(-1F, 0.4F, 0F);
            case 12: return new Vector3(0.3F, -0.4F, -0.9F);
        }
        return Vector3.zero;
    }

    override protected float RotateTowards(int side)
    {
        switch (side)
        {
            case 1: return 252F;
            case 2: return 19F;
            case 3: return 199F;
            case 4: return 325F;
            case 5: return 180F;
            case 6: return 35F;
            case 7: return 145F;
            case 8: return 0F;
            case 9: return 217F;
            case 10: return 342F;
            case 11: return 163F;
            case 12: return 72F;
        }
            
        return -1;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Dice"))
        {
            Physics.IgnoreCollision(GetComponent<Collider>(), collision.gameObject.GetComponent<Collider>());
        }
    }
}
